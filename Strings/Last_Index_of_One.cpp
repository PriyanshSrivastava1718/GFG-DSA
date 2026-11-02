/* class Solution {
  public:
    int lastIndex(string &s) 
    {
        int ans = -1;
        int n = s.length();
        for(int i = 0;i<n;i++)
        {
            if(s[i]=='1')
                ans = i;
        }
        return ans;
    }
}; */
/*
    GFG - Last Index of 1

    Approach:
    1. Initialize ans = -1.
    2. Traverse the string from left to right.
    3. Whenever '1' is encountered, update ans with its index.
    4. Return ans.
    5. If no '1' exists, return -1.

    Time Complexity: O(n)
    Space Complexity: O(1)
*/