// Tabulation method
class solution
{
public:
      int maxJump(vector<int> &stones)
      {
            int n = stones.size();
            vector<int> dp(n, 0);
            dp[0] = stones[0];
            dp[1] = stones[1];

            for (int i = 2; i < n; i++)
                  dp[i] = max(max(stones[i] - stones[i - 1], dp[i - 1]), max(stones[i] - stones[i - 2], dp[i - 2]));

            return dp[n - 1];
      }
}

// Space optimized
class sol
{
public:
      int maxJump(vector<int> &stones)
      {
            int prev1 = 0, prev2 = 0;
            for (int i = 1; i < stones.size(); i++)
            {
                  int left = prev + abs(stones[i] - stones[i - 1]);
                  int right = __INT_MAX__;
                  if (i > 1)
                        right = prev2 + abs(stones[i] - stones[i - 2]);

                  int curr = min(left, right);
                  prev2 = prev1;
                  prev1 = curr;
            }
            return prev1;
      }
}