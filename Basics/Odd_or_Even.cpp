class Solution {
  public:
    bool isEven(int n) 
    {
        if(n%2==0)
            return true;
        return false;
    }
};
/*
Problem: Check Even Number (isEven)
Platform: GeeksforGeeks
Topic: Basic Programming, Mathematics

Approach:

1. Check whether n is divisible by 2 using n % 2.
2. If the remainder is 0, return true.
3. Otherwise, return false.

Time Complexity: O(1)
Auxiliary Space: O(1)

Key Learning:
An integer is even if it is divisible by 2 with no remainder.
The modulo operator (%) gives the remainder after division.
*/
