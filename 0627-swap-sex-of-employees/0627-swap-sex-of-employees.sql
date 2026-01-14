# Write your MySQL query statement below
UPDATE Salary
Set sex = Case
  WHEN sex = 'm' THEN 'f'
  ELSE 'm'
END;