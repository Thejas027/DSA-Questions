/*
Given an integer array nums and an integer k, return true if there are two distinct indices i and j in the array such that nums[i] == nums[j] and abs(i - j) <= k.
LEET Code : 219

this approach takes more time to TC = O(n * k)  but space complex SC = O(1)

*/

class solution
{
public:
      bool containsDuplicate(vector<int> &nums, int k)
      {
            int n = nums.size();

            for (int i = 0; i < n; i++)
            {
                  for (int j = i + 1; j <= k + i && j < n; j++)
                  {
                        if (nums[i] == nums[j])
                              return true;
                  }
            }
            return false;
      }
}