# Find the constant value for a linear two variable equation i.e., ax + by = c.

- a & b are given, you need to find the constant 'c' value, how you find it with two independent variables? And x,y can be integers, rational number, etc.
- Let's take few Examples:
<pre>
  25x + 10y = c,
  10x + 100y = c,
  11x + 35y = c
</pre>

# Solution:

- Extended Euclidean Algorithm is one of such algorithm which help to find solutions of such problems. How?
- Extended Euclidean stated as: 
<pre>
  ax + by = gcd(a, b)
</pre>
- So, it becomes finding the gcd of two numbers and the problem solved.
- Check the Solution.py file for the solution.
