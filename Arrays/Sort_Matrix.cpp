/* class Solution {
  public:
    vector<vector<int>> sortedMatrix(vector<vector<int>>& mat) 
    {
        vector<int> temp;

        for(auto row : mat)
        {
            for(auto x : row)
                temp.push_back(x);
        }
        sort(temp.begin(), temp.end());
        int k = 0;

        for(int i = 0; i < mat.size(); i++)
        {
            for(int j = 0; j < mat[0].size(); j++)
            {
                mat[i][j] = temp[k++];
            }
        }
        return mat;
    }
}; */
/*
    GFG - Sorted Matrix

    Approach:
    1. Create a temporary 1D vector.
    2. Traverse the matrix and store all elements in temp.
    3. Sort the temporary vector in ascending order.
    4. Traverse the original matrix and replace its elements
       with the sorted elements sequentially.
    5. Return the modified matrix.

    Time Complexity: O((N*M) * log(N*M))
    Space Complexity: O(N*M)
*/