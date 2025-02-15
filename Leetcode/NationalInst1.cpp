#include <bits/stdc++.h>

using namespace std;

int countDistinctSums(vector<int> &nums)
{
      set<int> s;
      int n = nums.size();

      for (int i = 0; i < n; i++)
      {
            int sum = 0;
            for (int j = i; j < n; j++)
            {
                  sum += nums[j];
                  s.insert(sum);
            }
      }
      return s.size();
}

int main()
{
      vector<int> nums = {1, 2, 3};
      cout << countDistinctSums(nums) << endl;
      return 0;
}
