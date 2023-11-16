
create database university;
use university;

select * from coursess;
select * from shippings;
select * from facultymembers;

alter table facultymembers add academic_degree varchar(20);

UPDATE facultymembers
	SET acadmic_degree = CASE
	WHEN faculty_id = '1' THEN 'MBA'
    WHEN faculty_id = '2' THEN 'MA'
    WHEN faculty_id = '3' THEN 'MEng'
    WHEN faculty_id = '4' THEN 'MS'
    WHEN faculty_id = '5' THEN 'ME'
    WHEN faculty_id = '6' THEN 'Mcom'
    WHEN faculty_id = '7' THEN 'M.Tech'
    WHEN faculty_id = '8' THEN 'ME'
    WHEN faculty_id = '9' THEN 'M.sc'
    WHEN faculty_id = '10' THEN 'MBA'
    WHEN faculty_id = '11' THEN 'MA'
    WHEN faculty_id = '12' THEN 'PHD'
    WHEN faculty_id = '13' THEN 'MBA'
    WHEN faculty_id = '14' THEN 'MA'
    WHEN faculty_id = '15' THEN 'PHD'
	WHEN faculty_id = '16' THEN 'MBA'
	WHEN faculty_id = '17' THEN 'MA'
	WHEN faculty_id = '18' THEN 'PHD'
	WHEN faculty_id = '19' THEN 'MBA'
	WHEN faculty_id = '20' THEN 'MA'
    end
WHERE faculty_id IN ('1', '2', '3','4','5','6','7','8','9','10','11','12','13','14','15','16','17','18','19','20');

alter table facultymembers add date_of_birth varchar(20);

UPDATE facultymembers
SET date_of_birth =
CASE
    WHEN faculty_id = '1' THEN '2001-01-01'
    WHEN faculty_id = '2' THEN '2005-02-12'
    WHEN faculty_id = '3' THEN '2009-12-12'
     WHEN faculty_id = '4' THEN '2012-01-11'
    WHEN faculty_id = '5' THEN '2007-07-14'
    WHEN faculty_id = '6' THEN '2006-09-25'
     WHEN faculty_id = '7' THEN '2001-02-12'
    WHEN faculty_id = '8' THEN '2009-3-22'
    WHEN faculty_id = '9' THEN '1999-03-19'
     WHEN faculty_id = '10' THEN '1999-03-19'
    WHEN faculty_id = '11' THEN '1992-10-27'
    WHEN faculty_id = '12' THEN '1998-07-09'
     WHEN faculty_id = '13' THEN '1996-06-29'
    WHEN faculty_id = '14' THEN '1991-06-25'
    WHEN faculty_id = '15' THEN '1994-09-25'
     WHEN faculty_id = '16' THEN '1999-03-21'
    WHEN faculty_id = '17' THEN '1997-04-21'
    WHEN faculty_id = '18' THEN '1995-04-18'
     WHEN faculty_id = '19' THEN '1999-03-19'
    WHEN faculty_id = '20' THEN '1992-02-17'
    end
WHERE faculty_id IN ('1', '2', '3','4','5','6','7','8','9','10','11','12','13','14','15','16','17','18','19','20');

alter table facultymembers add column status varchar(50);
     UPDATE facultymembers
	SET status = CASE
    when faculty_id = '1' then 'active'
    when faculty_id = '2' then 'Inactive'
    when faculty_id = '3' then 'active'
    when faculty_id = '4' then 'inactive'
    when faculty_id = '5' then 'active'
    when faculty_id = '6' then 'Inactive'
    when faculty_id = '7' then 'active'
    when faculty_id = '8' then 'active'
    when faculty_id = '9' then 'Inactive'
    end
	WHERE faculty_id  IN ('1', '2', '3','4','5','6','7','8','9');

alter table facultymembers add column years_of_experience int;

UPDATE facultymembers
	SET years_of_experience = CASE
	WHEN faculty_id = '1' THEN '7'
    WHEN faculty_id = '2' THEN '3'
    WHEN faculty_id = '3' THEN '5'
	WHEN faculty_id = '4' THEN '5'
    WHEN faculty_id = '5' THEN '3'
    WHEN faculty_id = '6' THEN '8'
	WHEN faculty_id = '7' THEN '9'
    WHEN faculty_id = '8' THEN '3'
    WHEN faculty_id = '9' THEN '2'
	WHEN faculty_id = '10' THEN '6'
    WHEN faculty_id = '11' THEN '6'
    WHEN faculty_id = '12' THEN '6'
	WHEN faculty_id = '13' THEN '7'
    WHEN faculty_id = '14' THEN '3'
    WHEN faculty_id = '15' THEN '2'
	WHEN faculty_id = '16' THEN '1'
    WHEN faculty_id = '17' THEN '2'
    WHEN faculty_id = '18' THEN '3'
	WHEN faculty_id = '19' THEN '8'
    WHEN faculty_id = '20' THEN '1'
    end
WHERE faculty_id IN ('1', '2', '3','4','5','6','7','8','9','10','11','12','13','14','15','16','17','18','19','20');

alter table facultymembers add column timing varchar(50);
    update facultymembers
    set timing = case
	when faculty_id = '1' then 'part_time'
	when faculty_id = '2' then 'part_time'
    when faculty_id = '3' then 'full_time'
    when faculty_id = '4' then 'full_time'
    when faculty_id = '5' then 'full_time'
    when faculty_id = '6' then 'part_time'
    when faculty_id = '7' then 'full_time'
    when faculty_id = '8' then 'full_time'
    when faculty_id = '9' then 'part_time'
    when faculty_id = '10' then 'full_time'
    when faculty_id = '11' then 'part_time'
    when faculty_id = '12' then 'full_time'
    when faculty_id = '13' then 'full_time'
    when faculty_id = '14' then 'full_time'
    when faculty_id = '15' then 'part_time'
    when faculty_id = '16' then 'full_time'
    when faculty_id = '17' then 'part_time'
    when faculty_id = '18' then 'full_time'
    when faculty_id = '19' then 'part_time'
    when faculty_id = '20' then 'part_time'
    end 
    where faculty_id in (1,2,3,4,5,6,7,8,9,10,11,12,13,14,15,16,17,18,19,20);    
    

-- 1. List the details of all faculty members. 
select * from facultymembers;

-- 2. List the details of all courses.
 select * from coursess;

-- 3. List the courses taught by a specific faculty member (e.g., 'Amit Kumar'). 
select first_name,last_name,course_name from facultymembers inner join courses on facultymembers.faculty_id=courses.course_id 
where facultymembers.first_name='Amit';
-- 4. Find the faculty member who teaches a specific course (e.g., 'Introduction to Computer Science'). 

-- 5. List the faculty members in the 'Computer Science' department. List the courses in the 'Physics' department. 
SELECT first_name AS FacultyName, C.Course_Name
FROM FacultyMembers AS FM
JOIN Courses AS C ON FM.Department = C.Department
WHERE FM.Department = 'Computer Science' OR C.Department = 'Physics';

-- 6. Find the faculty members who have 'Machine Learning' in their research interests. List the courses with a start date after '2023-02-01'. 
select first_name as FacultyName,course_name as CourseName from facultymembers FM join courses C
on FM.Department = C.Department where research_interests = 'Machine Learning' or start_date = '2023-02-01';

-- 7. Find the course with the highest number of credits. 
select  course_name,credits from courses order by credits desc limit 1 ;

-- 8. List the faculty members who are not currently active. 
  select * from facultymembers where status = 'active';
  
-- 9. List the courses with descriptions containing the word 'principles'. 
select course_name from courses where description like  '%principles%';

-- 10.Find the faculty members who teach courses with more than 3 credits. 
select  first_name,credits from facultymembers inner join courses order by credits limit 3 ;

-- 11.List the courses taught by faculty members with a 'Ph.D.' academic degree.   
select first_name, last_name, academic_degree from facultymembers where academic_degree in ("phd");

-- 12.Find the faculty members who are tenured.
  select * from facultymembers where hire_date <=curdate();

-- 13.List the faculty members with more than 5 years of experience.
select department,count(YEAR(CURDATE()) - YEAR(hire_date)) AS Years_of_Experience from facultymembers
group by department desc;

-- 14.Update the phone number of 'Amit Kumar' to '987-654-3210'.
update facultymembers set phone_number = '987-654-3210' where first_name = 'Amit' and last_name ='kumar';

-- 15.Add a new course with the following details: 'Database Management', '1', 'Computer Science', 'DB101', '2023-03-01', '2023-06-01', 'C302', '3.5', 'Introduction to database management.'. 
insert into coursess (course_name, faculty_id, department, course_code , start_date, end_date, room_number, credits, description)values
("Database Management", '1','Computer Science', 'DB101', '2023-03-01', '2023-06-01', 'C302', '3.5',"introduction to database management");

-- 16.Change the department of 'Priya Sharma' to 'Computer Science'. 
update facultymembers set department ='Computer Science' where first_name = 'Priya' and last_name ='Sharma';

-- 17.Delete the course with course code 'CHEM201'. 
delete from facultymembers where office_location ='CHEM201'; 

-- 18.Mark 'Rahul Yadav' as not currently active.
select status from facultymembers where first_name = 'rahul' ;

-- 19.Add 2 years of experience to all faculty members. 
UPDATE facultymembers SET years_of_experience = years_of_experience + 2;

-- 20.Remove the academic degree of 'Rajesh Patel'. 
delete from facultymembers where acadmic_degree= 'Rajesh';

-- 21.Add a new faculty member named 'Sandeep Gupta' with relevant details. 
insert into facultymembers (first_name,last_name)values ("Sandeep", "Gupta");
      
-- 22.Update the course room number for 'Introduction to Computer Science' to 'C302'. 
update coursess set room_number='C302' where course_name='Introduction to Computer Science';

-- 23.Change the description of 'Physics 101' to 'Fundamental principles of physics and electromagnetism.'.
UPDATE coursess SET description = 'Fundamental principles of physics and electromagnetism' WHERE course_name = 'Physics 101';
    
-- 24.Calculate the average years of experience for all faculty members.  
SELECT AVG(YEAR(CURDATE()) - YEAR(hire_date)) AS average_years_of_service FROM facultymembers;
 
-- 25.Find the faculty member with the highest years of experience. 
select faculty_id, first_name, last_name,max(YEAR(CURDATE()) - YEAR(hire_date)) as Highest_Years_of_Experience from facultymembers; 

-- 26.Count the number of courses in each department. 
select department,count(course_name) as Count_Course from coursess group by department; 

-- 27.Calculate the total number of credits offered by all courses.
 select sum(credits) as Total_No_of_Credits from coursess;

-- 28.Determine the number of faculty members in each department. 
select department,count(*) as No_of_faculty_Members from facultymembers group by department;

-- 29.Calculate the average number of credits for all courses. 
select avg(credits) as Average_No_of_Credits from coursess;

-- 30.Find the faculty member with the most research interests. 
select first_name,max(research_interests) from facultymembers order by research_interests desc;

-- 31.Count the number of full-time and part-time faculty members. 
    select count('part_time''full_time') as Full_time_and_Part_time_FacultyMembers from facultymembers;

-- 32.Calculate the total number of credits offered by the 'Computer Science' department. 
--    Determine the department with the highest average years of experience. 

select sum(credits)as Total_No_of_Credits from coursess order by department='Computer Science';
select department,max(YEAR(CURDATE()) - YEAR(hire_date)) as Highest_Years_of_Experience from facultymembers; 

-- 33.List the names of faculty members and the courses they teach.
select first_name,last_name,course_name from facultymembers inner join coursess
on facultymembers.faculty_id =coursess.course_id group by course_name;

-- 34.Find the faculty members who teach more than one course. 
select first_name,last_name,count(course_name) as Teach_More_than_Course 
from facultymembers inner join coursess 
on facultymembers.faculty_id =coursess.course_id 
group by course_name;

-- 35.List the courses and their faculty members' last names. 
select course_name,last_name from coursess inner join facultymembers on facultymembers.faculty_id=coursess.course_id;

-- 36.Find the faculty members who teach courses with more than 4 credits. 
select first_name,course_name,credits
from coursess 
inner join facultymembers
on facultymembers.faculty_id=coursess.course_id
where coursess.credits >= 4;

-- 37.List the courses, their faculty members, and the department in which they teach. 
select c.course_name,f.first_name,f.last_name,f.department from coursess c 
inner join facultymembers f
on f.faculty_id=c.course_id;

-- 38.Find the faculty members who teach courses with start dates in 2023.
select c.course_name,f.first_name,f.last_name, c.start_date from coursess c 
inner join facultymembers f
on f.faculty_id=c.course_id group by c.start_date='2023-01-01';

-- 39.List the courses and their faculty members who are tenuredthan 'John'.

-- 40.Find the faculty members who teach in the same department as 'Amit Kumar'. 
select first_name,last_name,department from facultymembers group by first_name='Amit' and last_name='kumar';

-- 41.List the courses taught by faculty members with 'Physics' in their research interests. 
select c.course_name,f.first_name,f.last_name from coursess c 
inner join facultymembers f
on f.faculty_id=c.course_id where research_interests= 'Physics';

-- 42.Find the faculty members who have the same first name as any course name. 
SELECT first_name, COUNT(*) AS name_count
FROM facultymembers
GROUP BY first_name
HAVING COUNT(*) > 1;
select * from facultymembers;

-- 43.Find the faculty members who teach courses with the highest number of credits.
select c.course_name,f.first_name,f.last_name,max(credits) as Highest_number_of_credits from coursess c 
inner join facultymembers f
on f.faculty_id=c.course_id group by credits;
 
-- 44.List the courses and their faculty members who are not currently active. 
select course_name from facultymembers inner join coursess on status <> "active";
      
-- 45.Find the courses with start dates later than the latest hire date of faculty members. 
select c.course_name,f.first_name,f.last_name,start_date,hire_date from coursess c 
inner join facultymembers f
on f.faculty_id=c.course_id group by hire_date desc;

-- 46.List the courses with descriptions longer than the average description length. 
select course_name,avg(char_length(description)) as average_description_length from coursess;

-- 47.Find the faculty members who teach courses with the earliest start date.
select c.course_name,f.first_name,f.last_name,start_date from coursess c 
inner join facultymembers f
on f.faculty_id=c.course_id group by start_date;
  
-- 48.List the courses and their faculty members who teach courses in the 'Computer Science' department. 
select c.course_name,f.first_name,f.last_name,c.department from coursess c inner join facultymembers f
on f.faculty_id=c.course_id group by department;

-- 49.Find the faculty members who have the same department as 'Physics 101'. 
select first_name, last_name from facultymembers group by department = 'physics101';

-- 50.List the courses and their faculty members who teach in departments with more than 3 faculty members. 
select c.course_name,f.first_name,f.last_name,f.department from coursess c 
inner join facultymembers f
on f.faculty_id=c.course_id group by department limit 3 ;

-- 51.Find the faculty members who teach courses with credits greater than the average credits.
select c.course_name,f.first_name,f.last_name,credits,avg(credits) as average_credits from coursess c 
inner join facultymembers f
on f.faculty_id=c.course_id group by credits;
 
-- 52.List the courses and their faculty members who teach courses with descriptions containing 'electromagnetism'.
select c.course_name,f.first_name,f.last_name,c.description from coursess c 
inner join facultymembers f
on f.faculty_id=c.course_id group by description ='electromagnetism';

-- 53.List the faculty members whose first names contain the letter 'a' and last names contain the letter 's'.
select first_name,last_name from facultymembers where first_name like 'a%' or last_name like'%s'; 

-- 54.Find the courses whose names start with the word 'Introduction.'
select course_name from coursess group by course_name='Introduction'; 

-- 55.List the faculty members who have an email address with the domain 'example.com'.
select first_name,last_name,email from facultymembers group by email='example.com';

-- 56.Find the courses with descriptions containing the phrase 'advanced topics.'
select course_name,description from coursess group by description ='electromagnetism';

-- 57.List the faculty members and their email addresses in all uppercase.
select first_name,last_name,upper(email) as email_addresses_in_uppercase from facultymembers;

-- 58.Find the courses with course codes that end with '101'.
select course_name,course_code from coursess group by course_code='%101'; 

-- 59.List the faculty members whose last names are exactly four characters long.
SELECT * FROM facultymembers WHERE LENGTH(last_name)  = '4';

-- 60.Find the courses with names that do not contain the word 'Advanced.'
select * from courses where course_name not like '%Advanced';

-- 61.List the faculty members and their phone numbers without dashes.
SELECT first_name, last_name, REPLACE(phone_number, '-', '') AS phone_number_without_dashes FROM facultymembers; 

-- 62.Find the courses with descriptions longer than 100 characters
SELECT * FROM coursess WHERE description >= '100';

-- 63.Retrieve the faculty members' full names by concatenating their first name and last name with a space in between.
select concat(first_name,'  ',last_name) as Space_FN_LN from facultymembers;

-- 64.Find the courses that have the word 'Science' located within their descriptions.
select course_name,description from coursess group by description='Science';

-- 65.List the first 5 characters of the course names.
select substring(course_name,1,5) as first_5_chr_of_Courses from coursess;

-- 66.Get the last 3 characters of the course codes.
select right(course_code,3) as first_5_chr_of_Courses from coursess;

-- 67.Display the course names reversed (e.g., 'Computer Science' should appear as 'ecneicS retupmoC').
select reverse(course_name) from coursess;

-- 68.Replace the word 'Advanced' in course names with 'Intermediate.'
update coursess set course_name=replace(course_name,'Advanced','Intermediate');

-- 69.Compare the faculty members' first names with the string 'John' and retrieve faculty members with names that are greater (alphabetically) than 'John'
SELECT * FROM facultymembers
WHERE first_name > 'John'
ORDER BY first_name;

SELECT * FROM facultymembers
WHERE LOWER(first_name) > LOWER('John') ORDER BY first_name ASC;

-- 70.Find courses with descriptions containing 'math' and replace it with 'mathematics.'
update coursess set description=replace(description,'math','mathematics');

-- 71.Retrieve the current date and time.
select current_timestamp() as Current_Date_Time;

-- 72.List the faculty members and their hire dates.
select * from facultymembers group by hire_date;

-- 73.Find the courses that have already started (based on the current date).
select course_name,start_date from coursess where start_date <= curdate();
      
-- 74.Calculate the duration (in days) of each course by subtracting the start date from the end date.
select course_name ,datediff(end_date,start_date) as Course_Duration from coursess;

-- 75.Display the day of the week for the start date of each course.
SELECT start_date, course_name, DATE_FORMAT(start_date, '%W') AS DayOfWeek FROM coursess group by course_name ;

-- 76.List the faculty members and their years of experience.
SELECT first_name,last_name, DATEDIFF(CURDATE(), hire_date) / 365 AS years_of_experience FROM facultymembers;

-- 77.Calculate the difference in years between the current date and each faculty member's hire date to determine their years of service.
SELECT first_name,last_name, DATEDIFF(CURDATE(), hire_date) AS years_of_services FROM facultymembers;

-- 78.Find the courses that have a start date in the future (after the current date).
select course_name ,start_date from coursess group by start_date> current_date();

-- 79.Calculate the average duration (in days) of all courses.
select avg(datediff(end_date,start_date)) as Average_Course_Duration from coursess;

-- 80.Determine the day of the week for the current date.
select dayofweek(current_date) as Day_of_Weeks;

-- 81.Retrieve the courses and their start dates sorted in ascending order.
select course_name,start_date from coursess order by start_date asc;

-- 82.List the faculty members and their ages based on their birthdates.
SELECT first_name,last_name,date_of_birth,DATEDIFF(CURDATE(), date_of_birth) / 365 AS age FROM facultymembers;

-- 83.Find the courses taught by faculty members with more than 10 years of experience.
 select course_name from courses c inner join facultymembers f on c.course_id = f.faculty_id where years_of_experience > hire_date ;
                        
-- 84.Calculate the total number of days between the start date of the course 'Physics 101' and the end date of the course 'Chemistry 101.'
SELECT DATEDIFF(end_date, start_date) AS total_days FROM coursess where course_name = 'Physics 101' or course_name = 'Chemistry 101';
     
-- 85.Retrieve the courses that have their start dates on a Monday.
 SELECT course_name, start_date FROM coursess WHERE DAYOFWEEK(start_date) = 2;

-- 86.Calculate the average years of experience for faculty members who are tenured.
ALTER TABLE facultymembers ADD COLUMN tenured BOOLEAN;
UPDATE facultymembers SET tenured = CASE WHEN years_of_experience > 5 THEN TRUE ELSE FALSE END;
SELECT AVG(years_of_experience) AS average_experience_tenured FROM facultymembers WHERE tenured = TRUE;

-- 87.List the faculty members and the number of years remaining until their retirement (assuming retirement at age 65).
SELECT first_name,last_name,date_of_birth,date_of_birth -65  AS years_until_retirement FROM facultymembers;

-- 88.List all faculty members and their research interests as a comma-separated list.
select group_concat(first_name, last_name, research_interests) as All_facultymembers from facultymembers;

-- 89.Display the courses taught by each faculty member as a comma-separated list.
 select group_concat(course_name, ',' ,first_name,',', last_name) as Faculty_member_as_comma_separated_list  from coursess 
 inner join facultymembers group by first_name, last_name ;
     
-- 90.List all course codes within each department as a comma-separated list.
 select group_concat(course_code,',',department) as course_code_department_comma_separated_list 
 from coursess group by department;
     
-- 91.Show all research interests of faculty members in the 'Computer Science' department as a comma-separated list.
select  group_concat(research_interests) as All_research_interests from facultymembers where department like '%computer science%';
    
-- 92.Display the course descriptions for each faculty member's courses as a comma-separated list.
SELECT F.first_name, GROUP_CONCAT(Course_name,',', description) AS course_descriptions 
FROM Facultymembers f JOIN Coursess c
ON F.faculty_id = C.faculty_id GROUP BY F.first_name;

-- 93.List the start dates of courses for each department as a comma-separated list.
select group_concat(start_date)as department from coursess group by department;

-- 94.Show the full-time or part-time status of faculty members along with their course names as a comma-separated list.
select group_concat(status, course_name) from facultymembers inner join coursess;

-- 95.List the course names taught by faculty members with 'Ph.D.' degrees as acomma-separated list.
select concat(first_name,',',course_name,',', acadmic_degree) as Degrees_as_acomma_separated_list 
from coursess 
inner join facultymembers 
on facultymembers.faculty_id = coursess.course_id
where acadmic_degree = 'PHD';

-- 96.Show all faculty members and their respective department's course codes as a comma-separated list.
select group_concat(first_name,',', last_name, ',',course_code) as All_faculty_members_course_code 
from facultymembers inner join coursess;
    
-- 97.List the departments along with the tenure status of faculty members in each department as a comma-separated list.
SELECT department, GROUP_CONCAT(tenured) AS tenure_status_list FROM facultymembers GROUP BY department;