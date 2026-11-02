/* class Solution {
  public:
    int sumOfMatrix(vector<vector<int>>& mat) 
    {
        int sum = 0;
        for(int i = 0;i<mat.size();i++)
        {
            for(int j = 0;j<mat[0].size();j++)
            {
                sum+=mat[i][j];
            }
        }
        return sum;
    }
}; */
/*
    GFG - Sum of Matrix

    Approach:
    1. Initialize sum = 0.
    2. Traverse every element of the matrix using nested loops.
    3. Add each element to sum.
    4. Return the final sum.

    Time Complexity: O(N*M)
    Space Complexity: O(1)
*/