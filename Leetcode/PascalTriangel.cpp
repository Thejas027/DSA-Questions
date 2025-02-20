// leet code question : 119 Pascal's Triangle II
class solution
{
private:
      int getIndex(int n, int r)
      {
            long long res = 1;
            for (int i = 0; i < r; i++)
            {
                  res *= (n - i);
                  res /= (i + 1);
            }
            return res;
      }

public:
      vector<int> getRow(int rowInd)
      {
            vector<int> ans;
            for (int i = 0; i < rowInd; i++)
            {
                  ans.push_back(getIndex(rowInd, i));
            }
            return ans;
      }
};

// leet code question : 118 Pascal's Triangle
class solution
{

private:
      int getIndex(int n, int r)
      {
            long long ans = 1;
            for (int i = 0; i < r; i++)
            {
                  ans *= (n - i);
                  ans /= (i + 1);
            }
            return ans;
      }

public:
      vector<vector<int>> generate(int numRows)
      {
            vector<vector<int>> ans;
            for (int i = 0; i < numRows; i++)
            {
                  vector<int> tempList;
                  for (int j = 0; j < i; j++)
                  {
                        tempList.push_back(getIndex(i, j));
                  }
                  ans.push_back(tempList);
            }
            return ans;
      }
};