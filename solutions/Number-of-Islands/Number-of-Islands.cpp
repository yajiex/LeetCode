// 2019-07-28
// O(4^nm)
// class Solution {
// public:
//     int numIslands(vector<vector<char>>& grid) {
//         int n = grid.size();
//         if(n==0)
//         {
//             return 0;
//         }
//         int m = grid[0].size();
//         if(m==0)
//         {
//             return 0;
//         }
//         vector<vector<bool>> visited = vector<vector<bool>>(n, vector<bool>(m, false));
//         int ans = 0;
//         for(int i=0;i<n;i++)
//         {
//             for(int j=0;j<m;j++)
//             {
//                 if(!visited[i][j] && grid[i][j] == '1')
//                 {
//                     dfs(i,j,grid,visited);
//                     ans++;
//                 }
//             }
//         }
//         return ans;
//     }
// private:
//     void dfs(int x, int y, vector<vector<char>>& grid, vector<vector<bool>>& visited)
//     {
//         if(x<0 || x>=grid.size() || y<0 || y>=grid[x].size() || visited[x][y] || grid[x][y] == '0')
//         {
//             return;
//         }
        
//         visited[x][y] = true;
//         dfs(x+1, y, grid, visited);
//         dfs(x-1, y, grid, visited);
//         dfs(x, y+1, grid, visited);
//         dfs(x, y-1, grid, visited);
//     }
// };

// 2020-04-17
class Solution {
public:
    int numIslands(vector<vector<char>>& grid) {
        int n = grid.size();
        if(n==0) {
            return 0;
        }
        int m = grid[0].size();
        if(m==0) {
            return 0;
        }
        
        vector<vector<bool>> visited(n, vector<bool>(m, false));
        int ans = 0;
        for(int i=0;i<n;i++) {
            for(int j=0;j<m;j++) {
                if(!visited[i][j] && grid[i][j] == '1') {
                    dfs(i, j, grid, visited);
                    ans++;
                }
            }
        }
        
        return ans;
    }

private:
    void dfs(int i, int j, vector<vector<char>>& grid, vector<vector<bool>>& visited) {
        if(i<0 || j<0 || i>=grid.size() || j>=grid[i].size() || visited[i][j] || grid[i][j] == '0') {
            return;
        }
        
        visited[i][j] = true;
        dfs(i+1, j, grid, visited);
        dfs(i-1, j, grid, visited);
        dfs(i, j+1, grid, visited);
        dfs(i, j-1, grid, visited);
    }
};