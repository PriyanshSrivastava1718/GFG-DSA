class Solution {
  public:
    int factorial(int n) 
    {
        if(n==0||n==1)
            return 1;
        return n*factorial(n-1);
    }
};
/*
Problem: Factorial
Platform: GeeksforGeeks (GFG)
Topic: Recursion, Mathematics

Approach:

* Return 1 when n == 0 or n == 1 (base cases).
* Multiply n by the factorial of n-1.
* Continue recursively until a base case is reached.

Time Complexity: O(n)
Space Complexity: O(n) auxiliary space

Key Learning:
Factorial recursion reduces a problem to a smaller instance by calculating n * factorial(n-1) until the base case is reached.
*/
