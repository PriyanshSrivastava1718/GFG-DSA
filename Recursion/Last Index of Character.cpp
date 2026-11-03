/* class Solution {
  private:
    void check(string& s,int i,char& c,int& index)
    {
        int n = s.length();
        if(i>=n)
        {
            return;
        }
        if(s[i]==c)
            index = i;
        check(s,i+1,c,index);
    }
  public:
    int lastIndex(string &s, char c) 
    {
        int i = 0;
        int index = -1;
        check(s,i,c,index);
        return index;
    }
}; */
/*
    GFG - Last Index of Character

    Approach:
    1. Use recursion to traverse the string from left to right.
    2. Initialize index as -1 to handle cases where the character is absent.
    3. Whenever the current character matches c, update index with i.
    4. Continue recursion until the end of the string.
    5. Return the last updated index.

    Time Complexity: O(n)
    Space Complexity: O(n) - Recursion Stack
*/