/*
Given an integer array nums, return the maximum difference between two successive elements in its sorted form. If the array contains less than two elements, return 0.

You must write an algorithm that runs in linear time and uses linear extra space.

Example 1:
Input: nums = [3,6,9,1]
Output: 3
Explanation: The sorted form of the array is [1,3,6,9], either (3,6) or (6,9) has the maximum difference 3.
*/

#include <bits/stdc++.h>
using namespace std;

int maxGap(vector<int> &nums)
{
      if (nums.size() < 2)
            return 0;

      sort(nums.begin(), nums.end());

      int maxDiff = 0;
      int n = nums.size();
      for (int i = 1; i < n; i++)
            maxDiff = max(maxDiff, nums[i] - nums[i - 1]);

      return maxDiff;
}

int main()
{
      vector<int> nums = {3, 6, 9, 1};
      cout << maxGap(nums) << endl;
      return 0;
}