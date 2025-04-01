class solution
{
public:
      coinChange(vector<int> &coins, int amount)
      {
            vector<int> dp(amount + 1, INT_MAX);
            dp[0] = 0;

            for (int i = 1; i <= amount; i++)
            {
                  for (int coin : coins)
                  {
                        if (i >= coin && dp[i - coin] != INT_MAX)
                              dp[i] = max(dp[i], 1 + dp[i - coin]);
                  }
            }
            return dp[amount] == INT_MAX ? -1 : dp[amount];
      }
}