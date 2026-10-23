/* class Solution {
  public:
    int countDigits(int n) 
    {
        int digit = 0;
        if(n==0)
            return 1;
        while(n!=0)
        {
            digit++;
            n/=10;
        }
        return digit;
    }
}; */
/*
Problem: Count Digits in a Number
Platform: GeeksforGeeks (GFG)
Topic: Maths, Basic Programming

Approach:
1. Initialize a counter to 0.
2. Repeatedly divide n by 10 to remove its last digit.
3. Increment the counter for each digit removed.
4. Return the total count.
5. Handle n = 0 separately because zero contains one digit.

Time Complexity: O(log10(n)) for n > 0
Auxiliary Space: O(1)

Key Learning:
Integer division by 10 removes the last digit of a number,
allowing its digits to be counted one by one.
*/