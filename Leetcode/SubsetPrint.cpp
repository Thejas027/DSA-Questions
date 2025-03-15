// Generation of subsets using the bit manipulation technique, can be solved using recursion as well
// Time complexcity : O(2^n * n)
// Space complexcity : O(2^n * n)
class solution
{
public:
      vector<vector<int>> subsetPrint(vector<int> &arr)
      {
            int n = arr.size();
            int subsetSize = 1 << n;
            vector<vector<int>> res;

            for (int i = 0; i <= subsetSize - 1; i++)
            {
                  vector<int> list;
                  for (int j = 0; j <= n - 1; j++)
                  {
                        if (i & (1 << j))
                              list.push_back(arr[j]);
                  }
                  res.push_back(list);
            }
            return res;
      }
}