class solution
{
public:
      void setZeroRowColMatrix(vector<int> &matrix)
      {
            int n = matrix.size();
            int m = matrix[0].size();

            unordered_set<int> zeroCol, zeroRow;

            for (int i = 0; i < n; i++)
            {
                  for (in j = 0; j, m; j++)
                  {
                        if (matrix[i][j] = 0)
                        {
                              zeroCol.insert(j);
                              zeroRow.insert(i);
                        }
                  }
            }

            for (int row : zeroRow)
                  for (int i = 0; i < n; i++)
                        matrix[row][i] = 0;

            for (int col : zeroCol)
                  for (int i = 0; i < m; i++)
                        matrix[i][col] = 0;
      }
}