----- Create a Database and Tables in SQL :

show databases;

-- Create a new database named 'Volcanus.'
   create database Volcanus;

-- Create a table called 'Customers' with the following columns:
-- customer_id (INT, Primary Key)
-- first_name (VARCHAR(50})
-- last_name (VARCHAR(50})
-- age (INT)
-- country (VARCHAR(50})

create table Customers(Customer_ID INT PRIMARY KEY,first_name VARCHAR(255),last_name VARCHAR(255),age INT,country VARCHAR(255));

-- Insert the following data into the 'Customers' table:
-- Customer ID: 1, First Name: Marcus, Last Name: Doe, Age: 31, Country: USA
-- Customer ID: 2, First Name: Robert, Last Name: Luna, Age: 22, Country: USA
-- Customer ID: 3, First Name: David, Last Name: Robinson, Age: 22, Country: UK
-- Customer ID: 4, First Name: Paul, Last Name: Reinhardt, Age: 25, Country: UK
-- Customer ID: 5, First Name: Alexandra, Last Name: Doe, Age: 28, Country: UAE

   insert into Customers VALUES(2,'Robert','Luna',22,'USA'),(3,'David','Robinson',22,'UK'),(4,'Paul','Reinhardt',25,'UK'),(5,'Alexandra','Doe',28,'UAE');
---------------------------------------------------------------------------------

-- Create a table called 'Orders' with the following columns:
-- order_id (INT, Primary Key)
-- item (VARCHAR(50})
-- amount (DECIMAL(l0, 2))
-- customer_id (INT)

create table Orders(Order_ID INT PRIMARY KEY,Item VARCHAR(50),Amount Decimal(10,2),Customer_ID int);

-- Insert the following data into the 'Orders' table:
-- Order ID: 1, Item: Keyboard, Amount: $400.00, Customer ID: 4
-- Order ID: 2, Item: Mouse, Amount: $300.00, Customer ID: 4
-- Order ID: 3, Item: Monitor, Amount: $12,000.00, Customer ID: 3
-- Order ID: 4, Item: Keyboard, Amount: $400.00, Customer ID: 1
-- Order ID: 5, Item: Mousepad, Amount: $250.00, Customer ID: 2

insert into Orders VALUES(1,'Keybroad',400,4),(2,'Mouse',300,4),(3,'Monitor',12000,3),(4,'Keybroad',400,1),(5,'Mousepad',250,2);
--------------------------------------------------------------------------------------

-- Create a table called 'Shippings' with the following columns:
-- shipping_id (INT, Primary Key)
-- status (VARCHAR(50})
-- customer (INT)

create table Shippings(shipping_ID INT PRIMARY KEY,Status VARCHAR(50),Customer int);

-- Insert the following data into the 'Shippings' table:
-- Shipping ID: 1, Status: Pending, Customer: 2
-- Shipping ID: 2, Status: Pending, Customer: 4
-- Shipping ID: 3, Status: Delivered, Customer: 3
-- Shipping ID: 4, Status: Pending, Customer: 5
-- Shipping ID: 5, Status: Delivered, Customer: 1

insert into Shippings VALUES(1,'Pending',2),(2,'Pending',4),(3,'Delivered',3),(4,'Pending',5),(5,'Delivered',1);

