// condition is given to generate the array and need to return the max of the array.
/*
You are given an integer n. A 0-indexed integer array nums of length n + 1 is generated in the following way:

nums[0] = 0
nums[1] = 1
nums[2 * i] = nums[i] when 2 <= 2 * i <= n
nums[2 * i + 1] = nums[i] + nums[i + 1] when 2 <= 2 * i + 1 <= n
Return the maximum integer in the array nums​​​.
 */


class solution
{
public:
      int generateArrMAx(int n)
      {
            if (n == 0)
                  return 0;

            vector<int> nums(n + 1, 0);
            nums[0] = 0;

            if (n >= 1)
                  nums[1] = 1;

            for (int i = 1; 2 * i < n; i++)
            {
                  nums[2 * i] = nums[i];
                  if (2 * i + 1 <= n)
                        nums[2 * i + 1] = nums[i] + nums[i + 1];
            }

            return *max_element(nums.begin(), nums.end());
      }
}