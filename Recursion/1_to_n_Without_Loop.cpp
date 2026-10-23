/* class Solution {
  public:
    void printTillN(int n) 
    {
        if(n == 0)
            return;
        printTillN(n - 1);
        cout << n << " ";
    }
}; */
/*
Problem: Print 1 to N
Platform: GeeksforGeeks (GFG)
Topic: Recursion

Approach:
1. Use n == 0 as the base case to stop recursion.
2. Recursively call printTillN(n - 1).
3. Print n after the recursive call returns.
4. This prints the numbers in ascending order from 1 to n.

Time Complexity: O(n)
Auxiliary Space: O(n), due to the recursion call stack.

Key Learning:
Printing after the recursive call ensures that numbers are
displayed in ascending order.
*/