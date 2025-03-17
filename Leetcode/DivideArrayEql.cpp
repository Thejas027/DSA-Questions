class solution
{
public:
      bool divideArray(vector<int> &nums)
      {
            int count = 0;
            int n = nums.size();

            for (int i = 0; i < n - 1; i++)
            {
                  if (nums[i] == nums[i + 1])
                        count++;
            }

            if (count >= n / 2)
                  return true;
            return false;
      }
}