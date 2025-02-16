/* Given an array of positive integers nums and a positive integer target, return the minimal length of a
subarray

whose sum is greater than or equal to target. If there is no such subarray, return 0 instead.

Input: target = 7, nums = [2,3,1,2,4,3]
Output: 2
Explanation: The subarray [4,3] has the minimal length under the problem constraint.
*/

class solution
{
public:
      int minSubArrLen(int target, vector<int> &nums)
      {
            int left = 0, sum = 0;
            int minSum = INT_MAX;

            for (int right = 0; right < nums.size(); ++right)
            {
                  sum += nums[right];

                  while (sum >= target)
                  {
                        minSum = min(right - left + 1, minSum);
                        sum -= nums[left];
                        ++left;
                  }
            }
            return (minSum == INT_MAx) ? 0 : minSum;
      }
}