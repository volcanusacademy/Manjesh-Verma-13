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
