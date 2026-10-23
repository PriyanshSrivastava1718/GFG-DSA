/* class Solution {
  public:
    int powMod(long long int x, long long int n, long long int M) 
    {
        long long int ans = 1;
        while(n>0)
        {
            if(n&1)
                ans = (ans * x)%M;
            x = (x*x)%M;
            n>>=1;
        }
        return ans%M;
    }
}; */
/*
Problem: Modular Exponentiation
Platform: GeeksforGeeks (GFG)
Topic: Maths, Binary Exponentiation, Modular Arithmetic

Approach:
1. Initialize ans = 1.
2. Iterate while the exponent n is greater than 0.
3. If n is odd, multiply ans by x and take modulo M.
4. Square x and take modulo M.
5. Right-shift n by one bit, effectively dividing it by 2.
6. Return ans modulo M.

Time Complexity: O(log n)
Auxiliary Space: O(1)

Key Learning:
Binary exponentiation computes powers efficiently by repeatedly
squaring the base and processing the exponent bit by bit.
Taking modulo at each step keeps intermediate values smaller.
*/