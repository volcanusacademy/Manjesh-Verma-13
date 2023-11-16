-- Select Queries :

create database company;

use company;

CREATE TABLE students (
    student_id INT PRIMARY KEY,
    first_name VARCHAR(50),
    last_name VARCHAR(50),
    date_of_birth DATE,
    gender ENUM('Male', 'Female', 'Other'),
    email VARCHAR(100),
    phone_number VARCHAR(20),
    address VARCHAR(100),
    city VARCHAR(50),
    state VARCHAR(50),
    zip_code VARCHAR(10)
);

INSERT INTO students (student_id, first_name, last_name, date_of_birth, gender,
email, phone_number, address, city, state, zip_code)
VALUES
    (1, 'John', 'Doe', '1998-05-15', 'Male', 'john.doe@example.com', '555-123-
4567', '123 Main St', 'Anytown', 'CA', '12345'),
    (2, 'Alice', 'Smith', '1997-09-20', 'Female', 'alice.smith@example.com', '555-
234-5678', '456 Elm St', 'Othertown', 'NY', '67890'),
    (3, 'Bob', 'Johnson', '1999-03-10', 'Male', 'bob.johnson@example.com', '555-
345-6789', '789 Oak St', 'Smallville', 'TX', '45678'),
    (4, 'Mary', 'Brown', '2001-08-05', 'Female', 'mary.brown@example.com', '555-
456-7890', '567 Maple St', 'Cityville', 'IL', '56789'),
    (5, 'Eva', 'Wilson', '1996-12-25', 'Female', 'eva.wilson@example.com', '555-
567-8901', '890 Pine St', 'Othercity', 'CA', '23456'),
    (6, 'Sam', 'Anderson', '2000-07-18', 'Male', 'sam.anderson@example.com',
'555-678-9012', '123 Elm St', 'Newtown', 'WA', '34567'),
    (7, 'Linda', 'Lee', '1995-02-15', 'Female', 'linda.lee@example.com', '555-789-
0123', '345 Cedar St', 'Sometown', 'AZ', '45678'),
    (8, 'James', 'Clark', '1994-11-30', 'Male', 'james.clark@example.com', '555-890-
1234', '567 Oak St', 'Metropolis', 'GA', '56789'),
    (9, 'Emily', 'Garcia', '1993-06-08', 'Female', 'emily.garcia@example.com', '555-
901-2345', '789 Pine St', 'Springfield', 'MO', '67890'),
    (10, 'Daniel', 'Martinez', '2002-04-03', 'Male', 'daniel.martinez@example.com',
'555-012-3456', '890 Maple St', 'Hometown', 'OR', '12345'),
    (11, 'Sophia', 'Harris', '1998-08-14', 'Female', 'sophia.harris@example.com',
'555-123-4567', '234 Birch St', 'Yourtown', 'WI', '23456'),
    (12, 'David', 'Turner', '1997-05-22', 'Male', 'david.turner@example.com', '555-
234-5678', '456 Cedar St', 'Smalltown', 'TX', '34567'),
    (13, 'Olivia', 'Lewis', '2000-01-29', 'Female', 'olivia.lewis@example.com', '555-
345-6789', '789 Oak St', 'Newcity', 'NC', '45678'),
    (14, 'Michael', 'Perez', '1999-09-02', 'Male', 'michael.perez@example.com',
'555-456-7890', '123 Elm St', 'Citytown', 'CA', '56789'),
    (15, 'Emma', 'White', '1996-03-17', 'Female', 'emma.white@example.com',
'555-567-8901', '345 Pine St', 'Northville', 'NY', '67890'),
    (16, 'William', 'King', '2001-12-09', 'Male', 'william.king@example.com', '555-
678-9012', '567 Birch St', 'Westville', 'FL', '56789'),
    (17, 'Ava', 'Scott', '1994-07-04', 'Female', 'ava.scott@example.com', '555-789-
0123', '890 Cedar St', 'Centralville', 'MI', '12345'),
    (18, 'Joseph', 'Baker', '1993-10-11', 'Male', 'joseph.baker@example.com', '555-
890-1234', '456 Maple St', 'Easetown', 'WA', '23456'),
    (19, 'Mia', 'Gonzalez', '1997-04-18', 'Female', 'mia.gonzalez@example.com',
'555-901-2345', '678 Oak St', 'Westtown', 'CO', '34567'),
    (20, 'Alexander', 'Young', '1998-11-05', 'Male',
'alexander.young@example.com', '555-012-3456', '123 Cedar St', 'Southtown',
'NV', '45678'),
    (21, 'Charlotte', 'Miller', '1995-06-30', 'Female',
'charlotte.miller@example.com', '555-123-4567', '234 Oak St', 'Northtown', 'OH',
'56789'),
    (22, 'Samuel', 'Lopez', '1994-03-27', 'Male', 'samuel.lopez@example.com',
'555-234-5678', '789 Pine St', 'Eastville', 'IA', '67890'),
    (23, 'Madison', 'Hall', '1996-02-10', 'Female', 'madison.hall@example.com',
'555-345-6789', '345 Elm St', 'Westcity', 'UT', '12345'),
    (24, 'Matthew', 'Wright', '2000-07-25', 'Male', 'matthew.wright@example.com',
'555-456-7890', '567 Cedar St', 'Southville', 'PA', '23456'),
    (25, 'Lily', 'Brown', '1999-04-29', 'Female', 'lily.brown@example.com', '555-
567-8901', '890 Oak St', 'Northcity', 'TN', '34567'),
    (26, 'Benjamin', 'Hill', '1993-08-12', 'Male', 'benjamin.hill@example.com', '555-
789-0123', '123 Pine St', 'Westcity', 'OR', '56789'),
    (27, 'Avery', 'Taylor', '1997-11-07', 'Female', 'avery.taylor@example.com', '555-
890-1234', '234 Maple St', 'Centraltown', 'GA', '12345'),
    (28, 'Elijah', 'Collins', '1998-05-02', 'Male', 'elijah.collins@example.com', '555-
901-2345', '456 Oak St', 'Easttown', 'NC', '23456'),
    (29, 'Grace', 'Turner', '1995-12-15', 'Female', 'grace.turner@example.com',
'555-012-3456', '789 Cedar St', 'Westcity', 'AL', '34567'),
(30, 'Jacob', 'Garcia', '1994-01-20', 'Male', 'jacob.garcia@example.com', '555-
234-5678', '123 Oak St', 'Northville', 'KY', '56789');

select * from students;

-- 1. Retrieve the first and last names of all students.
select first_name,last_name from students;

-- 2. Get a list of students born after the year 2000.
select * from students where date_of_birth > '2000-12-31';

-- 3. List all female students.
select * from students where gender = 'female';

-- 4. Find the students who live in 'CA' (California).
select * from students where state = 'CA';

-- 5. Retrieve the email addresses and phone numbers of students with the lastname 'Smith'.
select email,phone_number from students where last_name = 'Smith';

-- 6. Get a list of students who live in 'NY' (New York) and were born before2000.
select * from students where state = 'NY' order by date_of_birth > '2000-12-31';

-- 7. List the first names of male students who live in 'TX' (Texas).
select first_name from students where state = 'TX' and gender = 'Male';

-- 8. Retrieve the first and last names of students who live in 'CA' and wereborn in or after 1998.
select first_name,last_name from students where state = 'CA' order by date_of_birth > '1998-12-31';

-- 9. Find the students who have 'Smith' in their last name or 'John' in their first name.
select * from students where last_name ='Smith' or first_name = "John";

-- 10.List the students in alphabetical order of their last names.
select * from students order by last_name asc;