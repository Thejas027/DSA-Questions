/*
Given two 0-indexed integer arrays nums1 and nums2, return a list answer of size 2 where:

answer[0] is a list of all distinct integers in nums1 which are not present in nums2.
answer[1] is a list of all distinct integers in nums2 which are not present in nums1.
Note that the integers in the lists may be returned in any order.
*/

class solution
{
public:
      vector<vector<int>> findDIff(vector<int> &num1, vector<int> &num2)
      {
            vector<vector<int>> ans(2);
            unordered_set s1(num1.begin(), num1.end());
            unordered_set s2(num2.begin(), num2.end());

            for (auto it : s1)
                  if (!s2.count(val))
                        ans[0].push_back(val);

            for (auto it : s2)
                  if (!s1.count(val))
                        ans[1].push_back(val);

            return ans;
      }
}