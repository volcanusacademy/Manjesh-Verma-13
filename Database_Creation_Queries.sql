-- Database Creation :
-- Assignment Questions:
-- Database Creation:
   -- Create a database named `Company`.
create database company;
use company;

-- Table Creation:
   -- Inside the `Company` database, create a table called `Employee` with the following fields:
     -- `EmployeeID` (Integer, Primary Key)
     -- `FirstName` (VARCHAR, 50 characters)
     -- LastName` (VARCHAR, 50 characters)
     -- `Salary` (Decimal, 10 digits in total with 2 decimal places)
     -- `Department` (VARCHAR, 50 characters)
     -- `HireDate` (Date)
     -- `JobTitle` (VARCHAR, 100 characters)
     -- `Location` (VARCHAR, 100 characters)
CREATE TABLE Employee (
    EmployeeID INT PRIMARY KEY,
    FirstName VARCHAR(50),
    LastName VARCHAR(50),
    Salary DECIMAL(10, 2),
    Department VARCHAR(50),
    HireDate DATE,
    JobTitle VARCHAR(100),
    Location VARCHAR(100)
);
-- Data Insertion:
   -- Insert 10 records into the `Employee` table with appropriate values for each field.
   
INSERT INTO Employee (EmployeeID, FirstName, LastName, Salary, Department, 
HireDate, JobTitle, Location)
VALUES
    (1, 'John', 'Doe', 60000, 'HR', '2020-01-15', 'HR Manager', 'New York'),
    (2, 'Jane', 'Smith', 45000, 'IT', '2019-03-22', 'Software Engineer', 'San 
Francisco'),
    (3, 'Bob', 'Johnson', 35000, 'Finance', '2020-05-10', 'Financial Analyst', 
'Chicago'),
    (4, 'Alice', 'Brown', 75000, 'Marketing', '2018-09-12', 'Marketing Manager', 'Los 
Angeles'),
    (5, 'David', 'Wilson', 55000, 'IT', '2019-11-30', 'Systems Analyst', 'San 
Francisco'),
    (6, 'Emily', 'Anderson', 40000, 'HR', '2020-02-18', 'HR Assistant', 'New York'),
    (7, 'Michael', 'Lee', 62000, 'Finance', '2019-08-05', 'Senior Accountant', 
'Chicago'),
    (8, 'Olivia', 'Garcia', 48000, 'IT', '2020-04-14', 'Software Developer', 'San 
Francisco'),
    (9, 'William', 'Martinez', 68000, 'Marketing', '2018-03-25', 'Marketing 
Specialist', 'Los Angeles'), 
(10, 'Sophia', 'Clark', 42000, 'HR', '2021-01-09', 'HR Coordinator', 'New York');   