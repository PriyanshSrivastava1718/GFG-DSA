/* class Solution {
  public:
    int largest(vector<int> &arr) 
    {
        int n = arr.size();
        int ans = INT_MIN;
        for(int i = 0;i<n;i++)
        {
            if(arr[i]>ans)
                ans = arr[i];
        }
        return ans;
    }
};
 */
/*
Problem: Largest Element in an Array (largest)
Platform: GeeksforGeeks
Topic: Arrays

Approach:

1. Initialize ans to INT_MIN.
2. Traverse the array using a for loop.
3. If arr[i] is greater than ans, update ans.
4. Return ans after checking all elements.

Time Complexity: O(n)
Auxiliary Space: O(1)

Key Learning:
A single traversal can find the largest array element
by maintaining and updating a running maximum.
*/
