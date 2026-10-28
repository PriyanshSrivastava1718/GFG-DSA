/* class Solution {
  public:
    int firstSearch(vector<int> &arr, int k) 
    {
        int ans = -1;
        int n = arr.size();
        int s = 0;
        int e = n-1;
        int m;
        while(s<=e)
        {
            m = s+(e-s)/2;
            if(arr[m]==k)
            {
                ans = m;
                e=m-1;
            }
            else if(arr[m]>k)
            {
                e=m-1;
            }
            else
                s=m+1;
        }
        return ans;
    }
}; */
/*
GFG: First Occurrence in a Sorted Array

Approach: Modified Binary Search

* Initialize s = 0, e = n-1, and ans = -1.
* If arr[m] == k, store m in ans and search the left half.
* If arr[m] > k, search the left half.
* If arr[m] < k, search the right half.
* Continue until s > e.
* Return ans; it remains -1 if k is not found.

Time Complexity: O(log n)
Auxiliary Space: O(1)

Key Learning:
To find the first occurrence, record the match and continue
searching left instead of returning immediately.
*/
