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
}