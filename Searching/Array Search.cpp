/* class Solution {
  public:
    int search(vector<int>& arr, int x) 
    {
        for(int i = 0;i<arr.size();i++)
        {
            if(arr[i] == x)
                return i;
        }
        return-1;
    }
}; */
/*
GFG: Linear Search

Approach: Linear Search

1. Traverse the array from the first element to the last.
2. If arr[i] == x, return the index i.
3. If the target element is not found after traversing the
   entire array, return -1.

Time Complexity: O(n) — in the worst case, we traverse the
                 entire array.
Space Complexity: O(1) — no extra space is used.
*/