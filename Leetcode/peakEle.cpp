class solution
{
public:
      int peakEle(vector<int> &nums)
      {
            int n = nums.size();
            int start = 0;
            int end = n - 1;

            while (start <= end)
            {
                  int mid = start + (end - start) / 2;

                  bool left = mid == 0 && nums[mid] >= nums[mid - 1];
                  bool right = mid == n - 1 && nums[mid] >= nums[mid + 1];

                  if (left && right)
                        return mid;

                  if (mid > 0 && nums[mid - 1] >= nums[mid])
                        end = mid - 1;
                  else
                        start = mid + 1;
            }
            return -1;
      }
}