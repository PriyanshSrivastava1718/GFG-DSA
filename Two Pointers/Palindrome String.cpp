/* 
class Solution {
  public:
    bool isPalindrome(string& s) 
    {
        int n = s.length();
        int st = 0;
        int e = n-1;
        while(st<=e)
        {
            if(s[st]!=s[e])
                return false;
            st++;
            e--;
        }
        return true;
    }
}; 
*/
/*
GFG: Palindrome String

Approach:
1. Initialize two pointers: st at the beginning and e at the end.
2. Compare characters at both pointers.
3. If they differ, return false.
4. Otherwise, move st forward and e backward.
5. If all comparisons match, return true.

Time Complexity: O(n)
Space Complexity: O(1)
*/