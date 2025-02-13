class solution
{
      int numDays(vector<int> &nums)
      {
            int n = nums.size();
            bool destroy = true;
            int days = 0;

            while (destroy)
            {
                  destroy = false;
                  vector<int> &temp;

                  for (int i = 1; i < n; i++)
                  {
                        if (nums[i - 1] < nums[i])
                              destroy = true;
                        else
                              temp.push_back(nums[i]);
                  }

                  nums = temp;

                  if (destroy)
                        days++;
            }
            return days;
      }
}