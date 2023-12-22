create database Assign;

USE Assign;

CREATE table Employees (
Employeeid int primary key,
FirstName varchar(50),
LastName varchar(50),
Email varchar(50),
PhoneNumber int(10),
DepartmentId int(50),
Position varchar(50),
Salary varchar(50));

create TABLE Departments (
DepartmentId int primary key,
DepartmentName varchar(50),
ManagerId int (50),
Locations varchar(50));

create table Projects (
ProjectId int primary key,
ProjectName varchar(50),
StartDate Date,
EndDate Date,
DepartmentId int,
foreign key (DepartmentId) references DEPARTMENTS(DepartmentId)); 

create table Tasks (
TaskId int primary key,
TaskDescription  varchar(50),
ProjectId int ,
EmployeeId int,
foreign key (EmployeeID) references Employees(EmployeeId),
foreign key (ProjectID) references Projects(ProjectId));

ALTER table Tasks ADD column (
DeadLine Varchar(500),
Status Varchar(500));

create  table Technologies (
TechnologiesId Int Primary Key,
TechnologiesName Varchar(500));

create TABLE Salaries (
SalaryId int Primary key,
EmployeeId int,
Foreign key (employeeId) References Employees(EmployeeId),
SalaryAmount Int,
SalaryDate Date);

Create Table Clients (
ClientId Int Primary Key,
ClientName Varchar(50),
ContactPerson Varchar(50),
Email Varchar(50),
PhoneNumber Int,
Locations Varchar(50));

Create Table ProjectsClient (
ProjectId Int,
foreign key (projectId) references Projects(ProjectId),
clientId Int,
Foreign Key (ClientId) References Clients(clientId));
 
