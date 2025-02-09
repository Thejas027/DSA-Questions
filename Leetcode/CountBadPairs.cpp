//Leet code : 2364 (Feb 9th daily question)
// Brute force approach to count the bad paris in the given array 
class solution
{
public:
      long long countBadPairs(vector<int> &nums)
      {
            long long count = 0;
            int n = nums.size();

            for (int i = 0; i < n; i++)
            {
                  for (int j = i + 1; j < n; j++)
                  {
                        if (nums[j] - j != nums[i] - i)
                              count++;
                  }
            }
            return count;
      }
}