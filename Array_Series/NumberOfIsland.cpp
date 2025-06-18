class solution
{
public:
      int numberIsland(vector<vector<char>> &grid)
      {
            int count = 0;
            int m = grid.size();
            int n = grid[0].size();

            if (grid.empty() || grid[0].empty())
                  return 0;

            for(int i = 0; i < m; i++{
                  for(int j = 0; j < n; j++{
                        if (grid[i][j] == '1')
                              count++;
                        dfs(grid, i, j);
                  }
            }
            return count;
      }

private:
      dfs(vector<vector<char>> &grid, int i, int j)
      {
            if (i < 0 || i >= grid.size() || j < 0 || j >= grid[0].size() || grid[i][j] == '0')
                  return;
            grid[i][j] = '0';    // Mark the cell as visited
            dfs(grid, i + 1, j); // Down
            dfs(grid, i - 1, j); // Up
            dfs(grid, i, j + 1); // Right
            dfs(grid, i, j - 1); // Left
      }
}