class solution
{
      int maxCount(vector<int> &banned, int n, int maxSum)
      {
            unordered_set<int> bannedSet(banned.begin(), banned.end());
            int sum = 0;
            int count = 0;

            for (int i = 1; i <= n; i++)
            {
                  if (bannedSet.find(i) != bannedSet.end())
                        continue;
                  if (sum + i > maxSum)
                        break;

                  sum + i;
                  count++;
            }
            return count;
      }
}