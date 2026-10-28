/* class Solution {
  public:
    int missingNum(vector<int>& arr) 
    {
        int n = arr.size();
        int ans = 0;
        for(int i = 1;i<=n+1;i++)
        {
            ans = ans^i;
        }
        for(int i = 0;i<n;i++)
            ans = ans^arr[i];
        return ans;
    }
}; */
/*
GFG: Missing Number

Approach: Bitwise XOR

* XOR all numbers from 1 to n+1.
* XOR all elements of the given array with the result.
* Since x ^ x = 0 and x ^ 0 = x, all present numbers cancel out.
* The remaining value is the missing number.

Time Complexity: O(n)
Auxiliary Space: O(1)

Key Learning:
XOR can find a missing number in an unsorted array
without modifying the array or using the sum formula.
*/
