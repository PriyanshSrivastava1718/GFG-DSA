/* class Solution {
  public:
    int maxSubarraySum(vector<int>& arr, int k) 
    {
        int n = arr.size();
        int sumk = 0;
        for(int i = 0; i < k; i++)
        {
            sumk += arr[i];
        }
        int max_sum = sumk;
        for(int i = k; i < n; i++)
        {
            sumk += arr[i] - arr[i-k];
            if(max_sum < sumk)
                max_sum = sumk;
        }
        return max_sum;
    }
}; */
/*
Problem: Maximum Subarray Sum of Size K
Platform: GeeksforGeeks (GFG)
Topic: Sliding Window (Fixed Size)

Approach:
1. Calculate the sum of the first k elements.
2. Initialize max_sum with the first window's sum.
3. Slide the window by adding the incoming element and
   subtracting the outgoing element.
4. Update max_sum whenever a larger window sum is found.
5. Return max_sum.

Time Complexity: O(n)
Auxiliary Space: O(1)

Key Learning:
A fixed-size sliding window avoids recalculating the entire
sum for every subarray by updating the previous window's sum.
*/