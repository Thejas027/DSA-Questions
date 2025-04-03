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

// Minimum sum of mountain triplets
class solution
{
public:
      int minMountain(vector<int> &nums)
      {
            int n = nums.size();
            if (n < 3)
                  return -1;

            vector<int> leftMin(n, INT_MAX), rightMin(n, INT_MAX);

            leftMin[0] = nums[0];
            for (int i = 1; i < n; i++)
                  leftMin[i] = min(leftMin[i - 1], nums[i]);

            rightMin[n - 1] = nums[n - 1];
            for (int i = n - 2; i >= 0; i--)
                  rightMin[i] = min(rightMin[i + 1], nums[i]);

            int res = INT_MAX;
            for (int i = 1; i < n - 1; i++)
            {
                  if (leftMin[i - 1] < nums[i] && rightMin[i + 1] < nums[i])
                        res = min(res, leftMin[i - 1] + nums[i] + rightMin[i + 1]);
            }
            return (res == INT_MAX) ? -1 : res;
      }
}

// Sum of beauties
class solution
{
public:
      int sumBeauty(vector<int> &nums)
      {
            int n = nums.size();
            int sum = 0;
            vector<int> leftMin(n, INT_MAX), rightMin(n, INT_MAX);

            leftMin[0] = nums[0];
            for (int i = 1; i < n; i++)
                  leftMin[i] = max(leftMin[i - 1], nums[i]);

            rightMin[n - 1] = nums[n - 1];
            for (int i = n - 2; i >= 0; i--)
                  rightMin[i] = min(rightMin[i + 1], nums[i]);

            for (int i = 1; i < n - 1; i++)
            {
                  if (leftMin[i - 1] < nums[i] && nums[i] < rightMin[i + 1])
                        sum += 2;
                  else if (nums[i - 1] < nums[i] && nums[i] < nums[i + 1])
                        sum += 1;
            }
            return sum;
      }
}