-- SQL joins Practice

-- 1.	Retrieve the first names of customers along with the item names they have ordered.
select first_name,item from customers inner join orders;

-- 2.	List all customers and their orders, including those who haven't placed any orders.
select distinct first_name,last_name,status from customers inner join shippings where status='pending';

-- 3.	Display all orders and their corresponding customer names, including orders without associated customers.
select item,first_name,last_name from orders left join customers on orders.customer_id=customers.customer_id;

-- 4.	Retrieve a list of all customers and their orders. Include both customers without orders and orders without customers.
select * from orders left join customers on orders.customer_id=customers.customer_id;

-- 5.	List customers who haven't placed any orders.
select distinct first_name,last_name,status from shippings inner join customers where status="pending";

-- 6.	Display orders without associated customers.
insert into Orders(Order_ID,Item,Amount,Customer_ID) values (6,'Charger',850,null);
select * from orders left join customers on orders.customer_id=customers.customer_id where customers.customer_id is null;

-- 7.	Find pairs of customers from the same country.
select country,count(*) as Pairs_of_customer from customers group by country;

-- 8.	Generate all possible combinations of products (items) and customers.
select customers.customer_id,orders.item from customers cross join orders;

-- 9.	Retrieve the item names and shipping statuses for orders with shipping information.
SELECT item,status AS shipping_status FROM orders LEFT JOIN shippings ON orders.order_id = shippings.shipping_id;

-- 10.	List all orders and their shipping statuses, including orders without shipping information.
SELECT item,status AS shipping_status FROM orders inner join shippings ON orders.order_id = shippings.shipping_id;
-- 11.	Display all shipping records and their corresponding order items, including records without associated orders.
select * FROM shippings s LEFT JOIN  orders o ON s.shipping_id = o.order_id ORDER BY s.shipping_id, o.item;

-- 12.	Retrieve a list of all orders and their shipping statuses.
-- Include both orders without shipping information and shipping records without associated orders.
select * from shippings right join orders on orders.order_id=shippings.shipping_id;

-- 13.	List orders without shipping information.
select distinct item from orders inner join shippings;

-- 14.	Display shipping records without associated orders.
select status,item from shippings left join orders on shipping_id=orders.order_id;

-- 15.	Find pairs of orders with the same item and amount.
select o1.item,o1.amount from orders o1
join orders o2
where o1.item = o2.item and o1.amount = o2.amount
and o1.order_ID < o2.order_ID;

-- 16.	Generate all possible combinations of orders and shipping records.
select * from orders cross join shippings;