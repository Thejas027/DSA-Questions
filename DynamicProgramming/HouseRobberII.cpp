//House Robber II 
class solution
{
private:
      int f(vector<int> &n nums)
      {
            int n = nums.size();
            if (n == 0)
                  return 0;
            if (n == 1)
                  return nums[0];

            int prev1 = nums[0], prev2 = 0;
            for (int i = 1; i < n; i++)
            {
                  int take = nums[i] + (i > 1 ? prev2 : 0);
                  int notTake = 0 + prev1;
                  int cur = max(take, notTake);
                  prev2 = prev1;
                  prev1 = cur;
            }
            return prev1;
      }

public:
      int rob(vector<int> &nums)
      {
            int n = nums.size();
            if (n == 1)
                  return nums[0];

            vector<int> temp1, temp2;
            for (int i = 1; i < n; i++)
            {
                  if (i != 0)
                        temp1.push_back(nums[i]);
                  if (i != n - 1)
                        temp2.push_back(nums[i]);
            }
            return max(f(temp1), f(temp2));
      }
}