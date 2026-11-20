/* class Solution 
{
  private:
    bool safe(vector<vector<int>>& maze,vector<vector<bool>>& visited,int i,int j,int row,int col)
    {
        if(i<0 || j<0)
            return false;
        if(i>=row || j>= col)
            return false;
        if(maze[i][j]==0)
            return false;
        if(visited[i][j]==true)
            return false;
        return true;
    }
    void solvemaze(vector<vector<int>>& maze,vector<vector<bool>>& visited,int row,int col,int i,int j,vector<string>& arr,string ans)
    {
        if(i==row-1 && j==col-1)
        {
            arr.push_back(ans);
            return;
        }
        
        //down
        
        if(safe(maze,visited,i+1,j,row,col))
        {
            ans+="D";
            visited[i+1][j] = true;
            solvemaze(maze,visited,row,col,i+1,j,arr,ans);
            visited[i+1][j] = false;
            ans.pop_back();
        }
        
        
        
        //left
        
        if(safe(maze,visited,i,j-1,row,col))
        {
            ans+="L";
            visited[i][j-1] = true;
            solvemaze(maze,visited,row,col,i,j-1,arr,ans);
            visited[i][j-1] = false;
            ans.pop_back();
        }
        
        //right
        
        if(safe(maze,visited,i,j+1,row,col))
        {
            ans+="R";
            visited[i][j+1] = true;
            solvemaze(maze,visited,row,col,i,j+1,arr,ans);
            visited[i][j+1] = false;
            ans.pop_back();
        }
        
        
        
        //up
        
        if(safe(maze,visited,i-1,j,row,col))
        {
            ans+="U";
            visited[i-1][j] = true;
            solvemaze(maze,visited,row,col,i-1,j,arr,ans);
            visited[i-1][j] = false;
            ans.pop_back();
        }
        
    }
  public:
    vector<string> ratInMaze(vector<vector<int>>& maze) 
    {
        int n = maze.size();
        int m = maze[0].size();
        vector<vector<bool>> visited(n,vector<bool> (m));
        visited[0][0] = true;
        vector<string> arr;
        string ans = "";
        if(maze[0][0]==0)
            return arr;
        solvemaze(maze,visited,n,m,0,0,arr,ans);
        return arr;
    }
}; */
/*
GFG - Rat in a Maze

Approach:
- Used recursion and backtracking to explore all valid paths.
- Used a safety function to check boundaries, blocked cells,
  and previously visited cells.
- Explored directions in D, L, R, U order.
- Marked cells as visited before recursive calls.
- Restored visited states after returning from recursion.
- Stored paths upon reaching the destination.

Time Complexity: O(N * 4^N) loose upper bound.
Auxiliary Space: O(N^2) due to copied path strings.
*/