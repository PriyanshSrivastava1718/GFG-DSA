/* class Solution {
  public:
    string reverseString(string& s) 
    {
        int st = 0;
        int e = s.length()-1;
        while(st<e)
        {
            swap(s[st],s[e]);
            st++;
            e--;
        }
        return s;
    }
};
 */
/*
Problem: Reverse a String
Platform: GeeksforGeeks (GFG)
Topic: Strings, Two Pointers
Approach:

* Initialize two pointers at the beginning and end of the string.
* Swap the characters at both pointers.
* Move the start pointer forward and the end pointer backward until they meet.
* Return the reversed string.

Time Complexity: O(n)
Space Complexity: O(1) auxiliary space

Key Learning:
The two-pointer technique reverses a string in-place without requiring an additional string.
*/
