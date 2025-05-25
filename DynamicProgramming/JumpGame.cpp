class solution
{
private:
      bool check(int i, vector<int> &nums, vector<int> &dp)
      {
            if (i >= nums.size() - 1)
                  return true;

            if (dp[i] != -1)
                  return dp[i];

            for (int j = 1; j <= nums[i]; j++)
            {
                  if (check(i + j, nums, dp))
                        return dp[i] = true;
            }
            return dp[i] = false;
      }

public:
      bool canJump(vector<int> &nums)
      {
            vector<int> dp(nums.size(), -1);
            return check(0, nums, dp);
      }
}