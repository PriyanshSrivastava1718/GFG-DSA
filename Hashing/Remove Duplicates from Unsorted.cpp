/* class Solution {
  public:
    vector<int> removeDuplicate(vector<int>& arr) 
    {
        vector<int> ar;
        unordered_set<int> ans;
        for(auto x:arr)
        {
            if(ans.find(x) != ans.end())
            {
                continue;
            }
            ar.push_back(x);
            ans.insert(x);
        }
        return ar;
    }
}; */
/*
GFG - Remove Duplicates from an Array

Approach: Unordered Set + Result Vector

1. Create an empty result vector to store unique elements.
2. Create an unordered_set to track visited elements.
3. Traverse the original array.
4. Check whether the current element already exists
   in the set.
5. If it exists, skip the element.
6. Otherwise:
   - Add the element to the result vector.
   - Insert it into the unordered_set.
7. Return the result vector.

Time Complexity: O(N) average
    - Each element is traversed once.
    - Hash set lookup and insertion take O(1) average time.

Space Complexity: O(N)
    - Unordered set and result vector may both
      store up to N elements.

Key Concepts:
- Unordered Set
- Hashing
- Duplicate Removal
- Order Preservation
*/