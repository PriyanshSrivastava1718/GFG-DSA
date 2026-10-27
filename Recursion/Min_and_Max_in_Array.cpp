/* class Solution 
{
  public:
    void solve(vector<int>& arr, int i, int& mini, int& maxi) 
    {
        int n = arr.size();

        if (i == n)
            return;

        mini = min(mini, arr[i]);
        maxi = max(maxi, arr[i]);

        solve(arr, i + 1, mini, maxi);
    }

    vector<int> getMinMax(vector<int>& arr) 
    {
        int mini = INT_MAX;
        int maxi = INT_MIN;

        solve(arr, 0, mini, maxi);

        return {mini, maxi};
    }
}; */
/*
Problem: Find Minimum and Maximum in an Array
Platform: GeeksforGeeks (GFG)
Topic: Arrays, Recursion, Pass by Reference

Approach:

* Initialize mini with INT_MAX and maxi with INT_MIN.
* Use a recursive helper function solve() to traverse the array.
* At each index, update mini and maxi using the current element.
* Pass mini and maxi by reference so their updated values persist across recursive calls.
* Increment the index and recursively process the next element.
* Stop when the index reaches the array size.
* Return the minimum and maximum as a vector.

Time Complexity: O(n)
Auxiliary Space: O(n) due to the recursion call stack.

Key Learning:

* Reference parameters allow recursive calls to update shared variables.
* The base case prevents accessing elements beyond the array bounds.
  */
