/* class Solution {
  public:
    int findMean(vector<int>& arr) 
    {
        int ans = 0;
        int n = arr.size();
        for(int i = 0;i<n;i++)
        {
            ans+=arr[i];
        }
        return ans/n;
    }
}; */
/*
Problem: Find Mean of Array (findMean)
Platform: GeeksforGeeks
Topic: Arrays, Mathematics

Approach:

1. Initialize ans to 0 and calculate the array size n.
2. Traverse the array and add each element to ans.
3. Return ans / n to calculate the integer mean.

Time Complexity: O(n)
Auxiliary Space: O(1)

Key Learning:
The arithmetic mean is the sum of all elements divided
by the number of elements. Integer division discards
the fractional part of the result.
*/
