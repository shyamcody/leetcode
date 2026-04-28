--sql function code
--https://leetcode.com/problems/nth-highest-salary/?envType=problem-list-v2&envId=m8baczxh
CREATE FUNCTION getNthHighestSalary(N INT) RETURNS INT
BEGIN
  DECLARE offset_val INT;
  SET offset_val = N - 1;
  RETURN (
      # Write your MySQL query statement below.
        SELECT DISTINCT salary
        FROM Employee
        ORDER BY salary DESC
        LIMIT 1 OFFSET offset_val
  );
END
