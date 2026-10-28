/* class Solution {
  public:
    int floorSqrt(int n) 
    {
        int s = 1;
        int e = n;
        int ans;
        long long  m;
        while(s<=e)
        {
            m = (long long) s+(e-s)/2;
            long long x = m*m;
            if(x==n)
            {
                ans =(int) m;
                break;
            }
            else if(x<n)
            {
                ans = (int)m;
                s = m+1;
            }
            else
                e = m-1;
        }
        return ans;
    }
}; */
/*
GFG: Floor Square Root

Approach: Binary Search

* Search for the square root in the range [1, n].
* Calculate the midpoint m and its square using long long.
* If m*m == n, return m because n is a perfect square.
* If m*m < n, store m as the answer and search the right half.
* If m*m > n, search the left half.
* Return the largest integer whose square is <= n.

Time Complexity: O(log n)
Auxiliary Space: O(1)

Key Learning:
Binary search can find the floor square root by locating
the largest integer whose square does not exceed n.
*/
