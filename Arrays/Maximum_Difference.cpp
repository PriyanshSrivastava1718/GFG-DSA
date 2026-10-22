/* class Solution {
  public:
    int findMaxDiff(vector<int> &arr) 
    {
        int n = arr.size();
        vector<int> lp(n, 0), rp(n, 0);

        for(int i = 0; i < n; i++)
        {
            for(int j = i - 1; j >= 0; j--)
            {
                if(arr[j] < arr[i])
                {
                    lp[i] = arr[j];
                    break;
                }
            }
        }

        for(int i = 0; i < n; i++)
        {
            for(int j = i + 1; j < n; j++)
            {
                if(arr[j] < arr[i])
                {
                    rp[i] = arr[j];
                    break;
                }
            }
        }

        int ans = 0;

        for(int i = 0; i < n; i++)
        {
            int x = abs(lp[i] - rp[i]);
            ans = max(ans, x);
        }

        return ans;
    }
}; */
/*
Problem: Maximum Difference
Platform: GeeksforGeeks
Topic: Arrays

Approach:
1. Create a left array (lp) to store the nearest smaller element
   on the left of each element.
2. Create a right array (rp) to store the nearest smaller element
   on the right of each element.
3. If no smaller element exists on either side, store 0.
4. Calculate the absolute difference between the left and right
   values for each element.
5. Return the maximum difference.

Time Complexity: O(n^2)
Auxiliary Space: O(n)

Note:
This implementation uses a brute-force approach to find the nearest
smaller elements on both sides. It does not use a monotonic stack.
*/