-- GroupBy and Having assignment :
-- To excute the provided queries involving GROUP BY and HAVING clauses, you should have two main tables in your database: Employees and Departments.

-- GROUP BY and HAVING queries

use company;
select * from Employee;

-- 1. Find Departments with More Than 5 Employees:
select department,count(EmployeeID) as Employee_Count from employee group by department having count(EmployeeID)>5;  

-- 2. List the departments with more than 5 employees.
select department from employee group by department having count(employeeId)>5; 

-- 3. Calculate Average Salary by Department for Departments with More Than 3 Employees:
select department,avg(salary) as Average_Salary from employee group by department having count(employeeid)>3; 

-- 4. Identify Locations with High Average Salaries:
select location,avg(salary) as Average_Salaries from employee group by location having avg(salary)>(select avg(salary) from employee);

-- 5. Find Job Titles with at Least 3 Employees:
select jobtitle,count(employeeid) as Employee_Count from employee group by jobtitle having count(EmployeeID)>=3;

-- 6. Calculate Total Salary Expenditure for Departments with Average Salaries Below $55,000:
select department,sum(salary) as Total_Salary_Expenditure from employee group by department having avg(salary) <55000;  

-- 7. Count the Number of Employees Hired in Each Year:
select extract(year from hiredate) as Hire_Years,count(*) as No_of_Employee from employee
group by extract(year from hiredate) order by Hire_Years;

-- 8. Identify Departments with No Employees Earning Over $70,000:
select department,count(employeeid) as No_of_Employees,salary as Earning_Over_70000 from employee 
group by employeeid having salary>70000;

-- 9 . Calculate the Average Years of Service by Department for Departments with at Least 2 Employees:
select department,AVG(YEAR(CURDATE()) - YEAR(hiredate)) AS average_years_of_service from employee
group by department having count(*)>=2;

-- 10. Find Locations with Only One Department:
select location,department from employee group by location limit 1;
 
-- 11. Identify Departments with the Highest Average Salary:
select department,salary as Highest_salary from employee group by salary desc limit 1;