# Write your MySQL query statement below
SELECT name AS Employee
FROM Employee AS a
WHERE a.salary > (SELECT salary FROM Employee AS b WHERE b.id = a.managerId )