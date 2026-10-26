/* class Solution {
  public:
    int firstOccurence(string& txt, string& pat) 
    {
        int ans = txt.find(pat);
        if(ans!=string::npos)
            return ans;
        return -1;
    }
}; */
/*
Problem: First Occurrence of a String
Platform: GeeksforGeeks (GFG)
Topic: Strings, STL

Approach:

* Use the built-in string::find() function to search for the first occurrence of the pattern in the text.
* If the pattern is found, return its starting index.
* If the pattern is not found, return -1.

Time Complexity: O(n * m) worst case
Space Complexity: O(1) auxiliary space

Key Learning:
string::find() returns the index of the first occurrence of a substring, or string::npos if it is not found.
*/
