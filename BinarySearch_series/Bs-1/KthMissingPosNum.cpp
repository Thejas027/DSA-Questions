/*
Given an array of positive array sorted in a strictly increasing order and an integer k.

Return the Kth positive integer that is missing from this array.
*/

class solution
{
public:
      int missingNumber(vector<int> &nums, int k)
      {
            int start = 0, end = nums.size() - 1;

            while (start <= end)
            {
                  int mid = start - (start - end) / 2;
                  int missingVal = nums[mid] - (mid + 1);

                  if (missing < k)
                        start = mid + 1;
                  else
                        end = mid - 1;
            }
            return k + end + 1;
      }
}