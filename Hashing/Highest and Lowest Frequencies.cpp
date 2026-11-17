/* class Solution {
public:
    int findDiff(vector<int>& arr) {
        unordered_map<int, int> mp;

        for (auto x : arr) {
            mp[x]++;
        }

        int mini = INT_MAX;
        int maxi = INT_MIN;

        for (auto x : mp) {
            mini = min(mini, x.second);
            maxi = max(maxi, x.second);
        }

        return maxi - mini;
    }
}; */
/*
Find Difference Between Frequencies

Approach: Hashing / Frequency Counting

1. Create an unordered_map to store the frequency
   of each distinct element.
2. Traverse the input array and increment the
   frequency of every element.
3. Initialize minimum frequency with INT_MAX
   and maximum frequency with INT_MIN.
4. Traverse the frequency map.
5. Update minimum and maximum using each element's
   stored frequency (x.second).
6. Return the difference between maximum and
   minimum frequency.

Time Complexity: O(N) average
    - Frequency counting takes O(N).
    - Map traversal takes O(K), where K is the
      number of distinct elements.

Space Complexity: O(K)
    - Hash map stores frequencies of K distinct elements.

Key Concepts:
- Unordered Map
- Frequency Counting
- Minimum and Maximum
*/