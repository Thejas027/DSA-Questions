// Leet Code : Finding Missing and Repeated Value in 2D Array

class solution
{
public:
      vecto<int> findMissingRepeat(vector<vector<int>> &grid)
      {
            int n = grid.size();
            int missing = -1, repeat = -1;

            // adding the grid value to the hash map
            unordered_map<int, int> freq;
            for (auto &row : grid)
            {
                  for (int num : row)
                        freq[num]++;
            }

            // finding missing and repeated value
            for (int i = 1; i <= n * n; i++)
            {
                  if (!freq.count(i))
                        missing = i;
                  else if (freq[i] == 2)
                        repeat = i;
            }
            return {repeat, missing};
      }
}