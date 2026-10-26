/* class Solution {
  public:
    int nthFibonacci(int n) 
    {
        if(n==0)
            return 0;
        if(n==1)
            return 1;
        return nthFibonacci(n-1)+nthFibonacci(n-2);
    }
}; */
/*
Problem: Fibonacci Number
Platform: GeeksforGeeks (GFG)
Topic: Recursion, Mathematics

Approach:

* Return 0 when n == 0 and 1 when n == 1.
* Recursively calculate the sum of the two preceding Fibonacci numbers.
* Continue until a base case is reached.

Time Complexity: O(2^n)
Space Complexity: O(n) auxiliary space

Key Learning:
The Fibonacci sequence demonstrates how a problem can be divided into smaller recursive subproblems until base cases are reached.
*/
