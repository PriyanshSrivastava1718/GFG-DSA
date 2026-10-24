/* class Solution {
  public:
    void printNos(int n) 
    {
        if(n==0)
            return;
        cout<<n<<" ";
        printNos(n-1);
        
    }
}; */
/*
Problem: Print N to 1
Platform: GeeksforGeeks
Topic: Recursion

Approach:

1. Define the base case: if n == 0, return.
2. Print the current value of n followed by a space.
3. Recursively call printNos(n - 1).
4. Continue until n reaches 0.

Time Complexity: O(n)
Auxiliary Space: O(n) due to the recursion call stack.

Key Learning:
Recursion can print numbers in descending order by printing
the current number before making the recursive call.
*/
