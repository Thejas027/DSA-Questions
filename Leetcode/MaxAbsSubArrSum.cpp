// Leet code : 1749. Maximum Absolute Sum of Any Subarray
//optimal solution

class solution
{
      int maxSubArrSum(vector<int> &nums)
      {
            int minPrefixSum = 0, maxPrefixSum = 0;
            int prefixSum = 0;

            for (int i = 0; i < nums.size(); i++)
            {
                  prefixSum += nums[i];
                  minPrefixSum = min(minPrefixSum, prefixSum);
                  maxPrefixSum = max(maxPrefixSum, prefixSum);
            }
            return maxPrefixSum - minPrefixSum;
      }
}