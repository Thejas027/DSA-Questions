// Find the number of subarrays with odd sum

// Brute force approach
class Solution
{
public:
      int numOfSubArray(vector<int> &arr)
      {
            int n = arr.size();
            int count = 0;
            for (int i = 0; i < n; i++)
            {
                  int sum = 0;
                  for (int j = i; j < n; j++)
                  {
                        sum += arr[j];

                        if (sum % 2 != 0)
                              count::''
                  }
            }
            return count;
      }
}

// optimal approach

class solution
{
public:
      int numOfSubArray(vector<int> &arr)
      {
            int oddCount = 0, evenCount = 1;
            int sum = 0, res = 0;
            int Mod = 1e + 7;
            for (int num : arr)
            {
                  sum += num;

                  if (sum % 2 != 0)
                  {
                        res += evenCount;
                        oddCount++;
                  }
                  else
                  {
                        res += oddCount;
                        evenCount++;
                  }

                  res %= Mod;
            }
            return res;
      }
}