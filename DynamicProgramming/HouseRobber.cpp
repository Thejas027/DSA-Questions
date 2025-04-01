class solution
{
public:
      int rob(vector<int> &nums)
      {
            int n = nums.size();
            if (n == 0)
                  return 0;
            if (n == 1)
                  return nums[0];
            vector<int> dp(n + 1, 0);

            dp[0] = nums[0];
            dp[1] = max(nums[0], nums[1]);

            for (int i = 2; i < n; i++)
            {
                  dp[i] = max(dp[i - 1], nums[i] + dp[i - 2]);
            }
            return dp[n - 1];
      }
}

// space optimized
class sol
{
public:
      int rob(vector<int> &nums)
      {
            int n = nums.size();
            if (n == 0)
                  return 0;
            if (n == 1)
                  return nums[0];

            int prev1 = 0, prev2 = 0;

            for (int num : nums)
            {
                  int cur = max(prev1, prev2 + num);
                  prev2 = prev1;
                  prev1 = cur;
            }
            return prev1;
      }
}