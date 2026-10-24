/* class Solution {
  public:
    bool isPrime(int n) 
    {
        if(n==1)
            return false;
        for(int i = 2;i<n;i++)
        {
            if(n%i==0)  
                return false;
        }
        return true;
    }
};
 */
/*
Problem: Check Prime Number (isPrime)
Platform: GeeksforGeeks
Topic: Mathematics, Basic Programming

Approach:

1. If n == 1, return false because 1 is not prime.
2. Iterate from 2 to n - 1.
3. If n is divisible by any i, return false.
4. If no divisor is found, return true.

Time Complexity: O(n)
Auxiliary Space: O(1)

Key Learning:
A prime number greater than 1 has exactly two positive
divisors: 1 and itself. Checking divisibility determines
whether any additional divisor exists.
*/
