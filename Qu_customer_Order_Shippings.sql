-- Queries on the 'Customers' Table:

-- 1.	Retrieve all customer information from the 'Customers' table.
select * from Customers;

-- 2.	Find the number of customerID in the 'Customers' table.
select Customer_ID from Customers;

-- 3.	Retrieve the first name and age of customers who are from the 'UK.'
select first_name,age from Customers where country= "UK";

-- 4.	List the distinct countries where customers are located.
select distinct country from customers;

-- 5.	Find the average age of customers.
select avg(age) from customers;

-- 6.	Retrieve the first name and country of customers who are not from the 'USA.'
select first_name,country from Customers where country!= "USA";

-- 7.	Find the oldest customer in the 'Customers' table.
SELECT * FROM Customers ORDER BY age DESC limit 1;

-- 8.	Retrieve the first name and last name of customers whose last names contain the substring 'Doe.'
select first_name,last_name from Customers where last_name like '%Doe%';

-- 9.	Count the number of customers in each country.
select count(*),country as No_of_customers from Customers group by country;

-- 10.	Retrieve the first name and age of customers from the 'USA' who are older than 30.
 select first_name,age from customers where country ="USA" and age>30;

-- 11.	List the customers in descending order of age.
select age from customers order by age desc;

-- 12.	Find the youngest customer in the 'Customers' table.
select first_name,age from customers where country ="USA" and age>30;

-- 13.	Retrieve the first name and country of customers who are not from the 'UK.'
select first_name,country from customers where country!='uk';

-- 14.	Count the number of customers in each age group (e.g., 20-29, 30-39, etc.).
SELECT
  CASE
    WHEN age BETWEEN 20 AND 25 THEN '20-25'
    WHEN age BETWEEN 26 AND 29 THEN '26-29'
    ELSE 'Other'
  END AS age_group,
  COUNT(*) AS customer_count
FROM customers GROUP BY age_group ORDER BY age_group;

-- 15.	Retrieve the first name and age of the top 5 oldest customers.
select first_name,age from customers order by age asc limit 5;

-- 16.	List the customers in alphabetical order by last name.
select last_name from customers order by last_name;

select last_name from customers order by last_name desc;

-- 17.	Find the customer with the highest age.
select max(age) from customers;

-- 18.	Retrieve the first name and age of customers who are either from the 'USA' or 'UK.'
select first_name,age from customers where country = 'usa' or 'uk';

-- 19.	Find the total number of customers who are older than 25.
select count(*) from customers where age >25;

-- 20.	Retrieve the first name and age of customers from the 'UK' who are younger than 25.
select first_name,age from customers where country ="UK" and age<25;

-- Queries on the 'Orders' Table:

-- 21.	Retrieve all order information from the 'Orders' table.
select * from orders;

-- 22.	Find the number of orders in the 'Orders' table.
select count(*) from orders;

-- 23.	Retrieve the item names and amounts for orders placed by customers from the 'USA.'
select item,amount from orders o inner join customers c on o.order_id=c.customer_id where country like 'USA';

-- 24.	List the distinct items that have been ordered.
select distinct(item) from orders;

-- 25.	Find the average order amount.
select avg(amount) as Average_amount from orders;

-- 26.	Retrieve the item names and customer IDs for orders with amounts greater than $500.
select item,customer_ID from orders where amount > '500';

-- 27.	Find the most expensive item in the 'Orders' table.
select item,max(amount) from orders;

-- 28.	Retrieve the item names and customer IDs for orders with amounts less than or equal to $200.
select item,customer_ID from orders where amount <= '200';

-- 29.	Count the number of orders placed by each customer.
select count(*) customer from orders;

-- 30.	Retrieve the item names and amounts for orders placed by customers from the 'UK.'
select item,amount from orders o inner join customers c on o.order_id=c.customer_id where country like 'UK';

-- 31.	List the orders in descending order of amount.
select * from orders order by item desc;

-- 32.	Find the order with the highest amount in the 'Orders' table.
select max(amount) as Max_amount from orders;

-- 33.	Retrieve the item names and amounts for orders placed by customers from the 'USA' or 'UK.'
select item,amount from orders o inner join customers c on o.order_id=c.customer_id where country like 'UK' or 'UK';

-- 34.	Count the number of orders placed for each item.
select count(item) from orders;

-- 35.	Retrieve the item names and amounts for the top 3 most expensive orders.
select item,amount from orders order by amount desc limit 3;

-- 36.	List the orders in alphabetical order by item name.
select item from orders order by item asc;

-- 37.	Find the order with the lowest amount.
select min(amount) from orders;

-- 38.	Retrieve the item names and amounts for orders placed by customers from the 'UK' or 'USA.'
select item,amount from orders o inner join customers c on o.order_id=c.customer_id where country like 'UK' or 'USA';

-- 39.	Find the total number of orders with amounts greater than $300.
select count(amount) from orders where amount > '300';

-- 40.	Retrieve the item names and amounts for orders placed by customers with IDs 1 and 2.
select item,amount from orders where customer_id in (1,2);

-- Queries on the 'Shippings' Table:

-- 41.	Retrieve all shipping information from the 'Shippings' table.
select * from shippings;

-- 42.	Find the number of shipping records in the 'Shippings' table.
select count(*) from shippings;

-- 43.	Retrieve the shipping statuses for orders with customer IDs 3 and 4.
select status from shippings where customer in (3,4);

-- 44.	List the distinct shipping statuses.
select distinct status from shippings;

-- 45.	Count the number of pending and delivered orders.
select status,count(*) from shippings group by status;

-- 46.	Retrieve the shipping statuses for orders with shipping IDs 1 and 3.
select status from shippings where customer in (1,3);

-- 47.	Find the most common shipping status in the 'Shippings' table.
select status, COUNT(*) AS status_count from Shippings GROUP BY status ORDER BY status_count DESC LIMIT 1;

-- 48.	Retrieve the shipping statuses for orders with customer IDs 1, 2, and 3.
 select status from shippings where shipping_id in (1,2,3);

-- 49.	List the shipping records in ascending order of shipping ID.
select shipping_ID from shippings order by customer asc;

-- 50.	Find the shipping status for order with shipping ID 5.
select status from shippings where shipping_id in (5);

-- 51.	Retrieve the shipping statuses for orders with customer IDs 1, 2, and 4.
select status from shippings where customer in (1,2,4);

-- 52.	List the shipping records in descending order of status.
select * from shippings order by status desc;

-- 53.	Find the total number of pending orders.
select count(*) from shippings where status="Pending";

-- 54.	Retrieve the shipping statuses for orders with customer IDs 2 and 5.
select status from shippings where customer in (2,5);

-- 55.	Count the number of delivered orders.
select count(*) from shippings where status="delivered";

-- 56.	Retrieve the shipping statuses for orders with shipping IDs 2 and 4.
select status from shippings where customer in (2,4);

-- 57.	List the shipping records in alphabetical order by status.
Select * from shippings order by status;

-- 58.	Find the total number of records with 'Pending' status.
select * from shippings where status="Pending";

-- 59.	Retrieve the shipping statuses for orders with customer IDs 3 and 5.
select status from shippings where customer in (3,5);

-- 60.	List the shipping records in reverse alphabetical order by status.
Select * From shippings order by status DESC;