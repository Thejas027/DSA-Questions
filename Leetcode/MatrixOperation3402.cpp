class solution
{
public:
      int operations(vector<vector<int>> &grid)
      {
            int m = grid.size();
            int n = grid[0].size();
            int opCount = 0;
            for (int col = 0; col < n; col++)
            {
                  for (int row = 1; row < m; row++)
                  {
                        if (grid[row][col] < grid[row - 1][col])
                        {
                              opCount += (grid[row - 1][col] - grid[row][col] + 1);
                              grid[row][col] = grid[row - 1][col] + 1;
                        }
                  }
            }
            return opCount;
      }
}