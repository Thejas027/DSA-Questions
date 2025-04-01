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

// Recursive solution
int
frogJumpKDist(int index, vector<int> &stones, int k)
{
      if (index == 0)
            return 0;

      int minSteps = INT_MAX;

      for (int j = 1; j <= k; j++)
      {
            if (index - j >= 0)
            {
                  int jump = abs(stones[index] - stones[index - j]) + frogJumpKDist(index - j, stones, k);
                  minSteps = min(minSteps, jump);
            }
      }

      return minSteps;
}

// Memoization method
int frogJumKDist2(int ind, vector<int> &stones, int k)
{
      if (ind == 0)
            return 0;
      vector<int> &dp(stones.size(), 0);

      if (dp[ind] != -1)
            return dp[ind];

      int minSteps = 0;
      for (int j = 1; j < k; j++)
      {
            if (ind - j >= 0)
            {
                  int jump = abs(stones[ind] - stones[ind - j]) + frogJumKDist2(ind - j, stones, k);
                  minSteps = min(jump, minSteps);
            }
      }
      return dp[ind] = minSteps;
}