// Leet code : 643 Maximum Average Subarray I

class solution
{
public:
      double findMaxAvg(vector<int> &nums, int k)
      {
            double sum = 0;
            double ans = 0;
            for (int i = 0; i < k; i++)
                  sum += nums[i];
            ans = sum;

            for (int i = k; i < nums.size(); i++)
            {
                  sum += nums[i];
                  sum -= nums[i - k];
                  ans = max(ans, sum);
            }
            return ans / k;
      }
}