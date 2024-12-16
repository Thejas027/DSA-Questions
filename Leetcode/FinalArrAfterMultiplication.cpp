// Leet code :   3264
// You are given an integer array nums, an integer k, and an integer multiplier.

// You need to perform k operations on nums. In each operation:

// Find the minimum value x in nums. If there are multiple occurrences of the minimum value, select the one that appears first.
// Replace the selected minimum value x with x * multiplier.
// Return an integer array denoting the final state of nums after performing all k operations.
class solution
{
      vector<int> getFinalState(vector<int> &nums, int k, int multiplier)
      {
            int n = nums.size();
            for (int i = 0; i < k; i++)
            {
                  int minIdx = 0;
                  int currentMin = nums[0];
                  for (int j = 0; j < n; j++)
                  {
                        if (nums[j] < currentMin)
                        {
                              currentMin = nums[j];
                              minIdx = j;
                        }
                  }
                  nums[minIdx] = currentMin * multiplier;
            }
            return nums;
      }
}