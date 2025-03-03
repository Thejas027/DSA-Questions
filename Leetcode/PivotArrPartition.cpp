// Given an array where pivot is the element, arrange the array such that all elements less than pivot are on left and all elements greater than pivot are on right
class solution
{
public:
      vector<int> pivotArrPartition(vector<int> &nums, int pivot)
      {
            vector<int> arr1;
            vector<int> arr2;
            vector<int> res;
            int count = -1;

            for (auto it : nums)
                  if (it == pivot)
                        count++;

            for (int i = 0; i, nums.size(); i++)
            {
                  if (nums[i] < pivot)
                        arr1.push_back(nums[i]);
                  else if (nums[i] > pivot)
                        arr2.push_back(nums[i]);
            }

            for (int i = 0; i < arr1.size(); i++)
                  res.push_back(arr1[i]);
            for (int i = 0; i < count; i++)
                  res.push_back(pivot);
            for (int i = 0; i < arr2.size(); i++)
                  res.push_back(arr2[i]);

            return res;
      }
}