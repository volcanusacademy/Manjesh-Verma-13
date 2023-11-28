SELECT * FROM new_schema.`sample data`;

SELECT DATE_FORMAT(STR_TO_DATE(orderdate, '%m/%d/%Y'), '%Y') AS converted_date
FROM new_schema.`sample data`;

-- What are total sales and total profits of each year?
select DATE_FORMAT(STR_TO_DATE(orderdate, '%m/%d/%Y'), '%Y') AS Sales_Year,sum(sales) as Total_Sales,sum(profit) as Total_Profits 
from new_schema.`sample data` group by orderdate;  

-- What are the total profits and total sales per quarter?


select CONCAT(YEAR(STR_TO_DATE(OrderDate, '%m/%d/%Y')), ' Q', QUARTER(STR_TO_DATE(OrderDate, '%m/%d/%Y'))) AS Sales_Year_Quarter,sum(sales) as Total_Sales,sum(profit) as Total_Profits 
from new_schema.`sample data` group by orderdate;  

--  What region generates the highest sales and profits ?
select region,sum(sales) as Highest_Sales,sum(profit) as Highest_Profits 
from new_schema.`sample data` group by Region limit 1;  

-- What state and city brings in the highest sales and profits ?
select state,city,sum(sales) as Highest_Sales,sum(profit) as Highest_Profits 
from new_schema.`sample data` group by state,city order by Highest_sales DESC limit 1;  

-- The relationship between discount and sales and the total discount per category
select category,sum(discount),sum(sales ) from new_schema.`sample data` group by Category;

-- What category generates the highest sales and profits in each region and state ?
select region,state,category,sum(sales) as Highest_Sales,sum(profit) as Highest_Profits 
from new_schema.`sample data` group by Region,state,Category order by region, state, Highest_sales DESC, Highest_profits DESC;

-- What are the names of the products that are the most and least profitable to us?
select ProductName ,profit as Most_Profit from new_schema.`sample data` 
ORDER BY profit desc limit 1; 
select ProductName ,profit as least_Profit from new_schema.`sample data` 
where profit > 0
ORDER BY profit limit 1;

-- What segment makes the most of our profits and sales

SELECT Segment,SUM(Profit) AS TotalProfits,SUM(Sales) AS TotalSales FROM new_schema.`sample data`
GROUP BY Segment ORDER BY TotalProfits DESC LIMIT 1;
 
-- How many customers do we have (unique customer IDs) in total and how much per region and state?
SELECT COUNT(CustomerID) AS TotalCustomers, region, state FROM new_schema.`sample data`
group by region,state;

-- Total Sales per Region and State
SELECT Region, State, COUNT(DISTINCT CustomerID) AS CustomersInRegionState, SUM(Sales) AS TotalSalesInRegionState
FROM new_schema.`sample data` GROUP BY Region, State;

-- Customer rewards program

-- Average shipping time per class and in total

SELECT ShipMode, AVG(DATEDIFF(OrderDate, ShipDate)) AS AvgShippingTimePerClass,
AVG(DATEDIFF(OrderDate, ShipDate)) AS AvgShippingTimeTotal
FROM new_schema.`sample data` GROUP BY ShipMode;


SELECT ShipMode,AVG(COALESCE(DATEDIFF(OrderDate, ShipDate), 0)) AS AvgShippingTimePerClass,
AVG(COALESCE(DATEDIFF(OrderDate, ShipDate), 0)) AS AvgShippingTimeTotal
FROM new_schema.`sample data` WHERE OrderDate IS NOT NULL AND ShipDate IS NOT NULL GROUP BY ShipMode;

