/* class Solution {
  public:
    int findEquilibrium(vector<int> &arr) 
    {
        int n = arr.size();
        vector<int> rsum(n,0);
        for(int i = n-2;i>=0;i--)
        {
            rsum[i] += rsum[i+1]+arr[i+1];
        }
        int lsum = 0;
        if(lsum == rsum[0])
            return 0;
        for(int i = 1;i<n;i++)
        {
            lsum+=arr[i-1];
            if(lsum==rsum[i])
                return i;
        }
        return -1;
    }
}; */
/*
GFG - Equilibrium Point

Approach: Prefix Sum + Suffix Sum

1. Create a right-sum array where each index
   stores the sum of elements to its right.

2. Maintain a left sum while traversing
   the original array.

3. Compare left sum and right sum at
   every index.

4. Return the first index where both sums
   are equal.

5. Return -1 if no equilibrium point exists.

Time Complexity: O(N)
Space Complexity: O(N)

Concepts Used:
- Prefix Sum
- Suffix Sum
- Array Traversal
*/