class solution
{
public:
      long long maxTripletOp(vector<int> &nums)
      {
            int n = nums.size();
            long long res = 0;
            for (int i = 0; i < n; i++)
            {
                  for (int j = i + 1; j < n; j++)
                  {
                        for (int k = j + 1; k < n; k++)
                        {
                              res = max(res, (long long)(nums[i] - nums[j]) * nums[k]);
                        }
                  }
            }
            return res;
      }

}

// Optimal approach with O(n) and with no extra space used
class solution
{
public:
      long long maxTripletVal(vector<int> &nums)
      {
            long ans = 0, iMax = 0, diff = 0;
            for (int i = 0; i < nums.size(); i++)
            {
                  ans = max(ans, nums[i] * diff);
                  diff = max(diff, iMax - nums[i]);
                  iMax = max(iMax, (long long)nums[i]);
            }
            return ans;
      }
}