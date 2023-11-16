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
