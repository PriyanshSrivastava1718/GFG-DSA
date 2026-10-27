/* class Solution {
  public:
    int findFloor(vector<int>& arr, int x) 
    {
        int ans = -1;
        int n = arr.size();
        for(int i = 0;i<n;i++)
        {
            if(arr[i]<=x)
                ans = i;
        }
        return ans;
    }
};
 */
/*
Problem: Find Floor in a Sorted Array
Platform: GeeksforGeeks (GFG)
Topic: Arrays, Linear Search

Approach:

* Initialize ans = -1 to handle cases where no element is <= x.
* Traverse the array from left to right.
* If arr[i] <= x, update ans = i.
* Since the array is sorted in ascending order, the last qualifying index is the floor index.
* Return ans.

Time Complexity: O(n)
Auxiliary Space: O(1)

Key Learning:

* Updating the answer whenever a valid element is found ensures the last qualifying index is returned.
* A linear traversal works correctly without using binary search.
  */
