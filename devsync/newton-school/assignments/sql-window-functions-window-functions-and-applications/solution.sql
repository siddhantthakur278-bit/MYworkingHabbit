-- SQL Window Functions & Applications
-- Solved on Newton School of Technology portal
SELECT 
    department,
    employee_name,
    salary,
    DENSE_RANK() OVER (PARTITION BY department ORDER BY salary DESC) as rank_in_dept,
    AVG(salary) OVER (PARTITION BY department) as avg_dept_salary
FROM employees;
