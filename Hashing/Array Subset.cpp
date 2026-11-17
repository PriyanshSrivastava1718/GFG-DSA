/* class Solution {
  public:
    bool isSubset(vector<int> &a, vector<int> &b) 
    {
        unordered_map<int,int> arr;
        for(auto x:a)
        {
            arr[x]++;
        }
        for(auto x:b)
        {
            if(arr[x]==0)
                return false;
            arr[x]--;
        }
        return true;
    }
}; */
/*
GFG - Array Subset

Approach: Unordered Map / Frequency Counting

1. Create an unordered_map to store the frequency
   of every element in array a.
2. Traverse array a and increment the frequency
   of each element.
3. Traverse array b.
4. Check whether the current element has a
   non-zero frequency in the map.
5. If its frequency is zero, return false.
6. Otherwise, decrement its frequency to mark
   that occurrence as used.
7. If all elements of b are successfully matched,
   return true.

Time Complexity: O(N + M) average
    - N = size of array a.
    - M = size of array b.
    - Hash map operations take O(1) average time.

Space Complexity: O(K)
    - K = number of distinct elements in array a.

Key Concepts:
- Unordered Map
- Frequency Counting
- Duplicate Handling
- Array Subset
*/