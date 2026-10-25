/* class Solution {
  public:
    vector<int> getMinMax(vector<int> &arr) 
    {
        int n = arr.size();
        int mini = INT_MAX;
        int maxi = INT_MIN;
        for(int i = 0;i<n;i++)
        {
            mini = min(mini,arr[i]);
            maxi = max(maxi,arr[i]);
        }
        vector<int> ans;
        ans.push_back(mini);
        ans.push_back(maxi);
        return ans;
    }
}; */
/*
Problem: Find Minimum and Maximum in an Array (getMinMax)
Platform: GeeksforGeeks
Topic: Arrays

Approach:

1. Initialize mini to INT_MAX and maxi to INT_MIN.
2. Traverse the array once.
3. Update mini using min(mini, arr[i]).
4. Update maxi using max(maxi, arr[i]).
5. Store the minimum and maximum in a vector and return it.

Time Complexity: O(n)
Auxiliary Space: O(1) excluding the output vector.

Key Learning:
A single traversal can find both the minimum and maximum
by maintaining two variables and updating them at each element.
*/
