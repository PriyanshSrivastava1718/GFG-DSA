/* class Solution {
  public:
    int countDistinct(vector<int>& arr) 
    {
        int count = 0;
        unordered_set<int> ans;
        for(auto x:arr)
        {
            if(ans.find(x)!=ans.end())
                continue;
            count++;
            ans.insert(x);
        }
        return count;
    }
}; */
/*
GFG - Count Distinct Elements in an Array

Approach: Unordered Set

1. Create an unordered_set to store unique elements.
2. Traverse the input array.
3. Check whether the current element already exists
   in the set.
4. If it exists, skip the element.
5. Otherwise, increment the count and insert
   the element into the set.
6. Return the total distinct element count.

Time Complexity: O(N) average
    - Each element is processed once.
    - Set insertion and lookup take O(1) average time.

Space Complexity: O(N)
    - In the worst case, all elements are distinct.

Key Concepts:
- Unordered Set
- Hashing
- Duplicate Detection
- Array Traversal
*/