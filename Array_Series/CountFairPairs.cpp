class solution
{
public:
      long long countGoodPairs(vector<int> &nums, int lower, int upper)
      {
            sort(nums.begin(), nums.end());
            return lowerBound(nums, upper + 1) - lowerBound(nums, lower);
      }

private:
      long long lowerBound(vector<int> &nums, int val)
      {
            int left = 0, right = nums.size();
            long long res = 0;

            while (left < right)
            {
                  int sum = nums[left] - nums[right];

                  if (sum < val)
                  {
                        res += (right - left);
                        left++;
                  }
                  else
                        right--;
            }
            return res;
      }
}