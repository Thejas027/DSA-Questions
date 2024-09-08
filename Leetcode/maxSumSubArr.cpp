class solution
{
public:
      int(vector<int> &nums)
      {
            int currentSum = nums[0];
            int maxSum = nums[0];

            for (size_t i = 0; i < nums.size(); i++)
            {
                  currentSum = max(nums[i], currentSum + nums[i]);
                  maxSum = max(currentSum, maxSum);
            }
            return maxSum;
      }
}