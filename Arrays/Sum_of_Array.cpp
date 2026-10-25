/*
Problem: Array Sum (arraySum)
Platform: GeeksforGeeks
Topic: Arrays, Basic Programming

Approach:

1. Initialize ans to 0.
2. Traverse the array using a for loop.
3. Add each element to ans.
4. Return the final sum.

Time Complexity: O(n)
Auxiliary Space: O(1)

Key Learning:
A running sum accumulates array elements in a single traversal
without requiring any additional data structures.
*/
/* 
class Solution {
  public:
    int arraySum(vector<int>& arr) 
    {
        int ans = 0;
        for(int i = 0;i<arr.size();i++)
            ans+=arr[i];
        return ans;
    }
}; 
*/