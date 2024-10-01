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

// solution 2
/* To find the peak element in the given unsorted array */
int
peakElement(arr, key, size)
{
      int start = 0;
      int end = size - 1;

      while (start <= end)
      {
            int mid = start + (end - start) / 2;

            if (mid > 0 && mid < size - 1)
            {
                  if (arr[mid] > arr[mid + 1] && arr[mid] < arr[mid - 1])
                        return mid;
                  else if (arr[mid] > arr[mid])
                        start = mid + 1;
                  else
                        end = mid - 1;
            }
            else if (mid == 0)
            {
                  if (arr[0] > arr[1])
                        return 0;
                  else
                        return 1;
            }
            else
                  (mid == size - 1)
                  {
                        if (arr[size - 1] > arr[size - 2])
                              return size - 1;
                        else
                              return size - 2;
                  }
      }
}