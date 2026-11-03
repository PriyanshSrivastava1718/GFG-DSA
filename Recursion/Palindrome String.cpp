/* class Solution 
{
  private:
    void check(string& s,int st,int e,int& ans)
    {
        if(st>=e)
            return;
        if(s[st]!=s[e])
        {
            ans=0;
            return;
        }
        check(s,st+1,e-1,ans);
    }
  public:
    bool isPalindrome(string& s) 
    {
        int n = s.length();
        int st = 0;
        int e = n-1;
        int ans = 1;
        check(s,st,e,ans);
        if(ans)
            return true;
        return false;
    }
}; */
/*
    GFG - Palindrome String

    Approach:
    1. Initialize two pointers, st at the beginning and e at the end.
    2. Compare the characters at both pointers.
    3. If they don't match, set ans to 0 and stop recursion.
    4. If they match, move st forward and e backward.
    5. Continue until st >= e, which is the base case.
    6. Return true if all character pairs match, otherwise false.

    Time Complexity: O(n)
    Space Complexity: O(n) - Recursion Stack
*/