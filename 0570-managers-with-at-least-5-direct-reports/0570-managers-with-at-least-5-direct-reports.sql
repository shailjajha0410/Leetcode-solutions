# Write your MySQL query statement below
Select e.name
From Employee AS e
Join Employee r
On e.id= r.managerId
GROUP BY e.id, e.name
HAVING COUNT(*) >= 5;