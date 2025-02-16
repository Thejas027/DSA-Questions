#include <bits/stdc++.h>
using namespace std;

int maxSumOfKElement(vector<int> &nums, int k)
{
      int n = nums.size();
      int left = 0;
      int right = 0;
      int sum = 0;
      int maxSum = INT_MIN;

      while (right < n - 1)
      {
            sum += nums[right];

            if (right - left + 1 == k)
            {
                  maxSum = max(sum, maxSum);
                  sum -= nums[left];
                  left++;
            }

            right++;
      }
      return maxSum;
}

int main()
{
      vector<int> nums = {-1, 2, 3, 3, 4, 5, -1};

      cout << maxSumOfKElement(nums, 4);
      return 0;
}
