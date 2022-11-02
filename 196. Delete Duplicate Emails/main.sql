# Please write a DELETE statement and DO NOT write a SELECT statement.
# Write your MySQL query statement below
DELETE a
FROM Person AS a, Person AS b
WHERE a.Email = b.Email and a.id > b.id