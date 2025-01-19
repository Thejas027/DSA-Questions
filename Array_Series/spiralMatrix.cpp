class solution
{
public:
      vector<int> spiralMatrix(vector<vector<int>> &matrix)
      {
            int startCol = 0;
            int endCol = matrix.size();
            int startRow = 0;
            int endRow = matrix[0].size();
            vector<int> ans;
            while (startCol <= endCol && startRow <= endRow)
            {
                  // print the top
                  for (int i = startCol; i <= endCol; i++)
                        ans.push_back(matrix[startRow][i]);

                  // print the right
                  for (int i = startRow + 1; i <= endRow; i++)
                        ans.push_back(matrix[i][endCol]);

                  if (startRow < endRow)
                  {
                        for (int i = endCol - 1; i >= startCol; i--)
                              ans.push_back(matrix[endRow][i]);
                  }

                  if (startCol < endCol)
                  {
                        for (int i = endRow - 1; i > startRow; i--)
                              ans.push_back(matrix[i][startCol])
                  }
                  startCol++;
                  startRow++;
                  endCol--;
                  endRow--;
            }
            return ans;
      }
}


