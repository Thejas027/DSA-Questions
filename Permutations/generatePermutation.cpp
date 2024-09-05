#include <bits/stdc++.h>
using namespace std;

void recurPerm(vector<int> &ds, vector<int> &nums, vector<vector<int>> &ans, int freq[])
{
      if (ds.size() == nums.size())
      {
            ans.push_back(ds);
            return;
      }

      for (int i = 0; i < nums.size(); i++)
      {
            if (!freq[i])
            {
                  ds.push_back(nums[i]);
                  freq[i] = 1;
                  recurPerm(ds, nums, ans, freq);
                  freq[i] = 0;
                  ds.pop_back();
            }
      }
}

vector<vector<int>> permute(vector<int> &nums)
{
      vector<vector<int>> ans; // to store the permutation array
      vector<int> ds;          // acts as a stack

      int freq[nums.size()] = {0};

      for (int i = 0; i < nums.size(); i++)
            freq[i] = 0;
      recurPerm(ds, nums, ans, freq);
      return ans;
}

int main()
{
      vector<int> nums = {1, 2, 3};
      vector<vector<int>> result = permute(nums);

      cout << "All the permutations of the nums are : ";
      for (auto &v : result)
      {
            for (auto &nums : v)
                  cout << nums << " ";
            cout << endl;
      }

      return 0;
}