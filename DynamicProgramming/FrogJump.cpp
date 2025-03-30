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