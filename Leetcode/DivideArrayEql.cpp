// Brute force approach
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

// Better using hashmap
class solution
{
public:
      bool divideArray(vector<int> &nums)
      {
            unordered_map<int, int> freq;
            for (auto it : nums)
                  freq[it]++;
            for (auto &it : freq)
            {
                  if (it.second % 2 != 0)
                        return false;
            }
            return true;
      }
}