//
class solution
{
public:
      int coinChange(int amount, vector<int> &coins)
      {
            vector<unit64_t> dp(amount + 1, 0);
            dp[0] = 1;

            for (int coin : coins)
            {
                  for (int i = coin; i <= amount; i++)
                  {
                        d[i] += dp[i - coin];
                  }
            }

            return (dp[amount] <= INT_MAX) ? static_cast<int>(dp[amount]) : -1;
      }
}