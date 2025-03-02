class solution
{
public:
      vector<vector<int>> merge @DArray(vector<vector<int>> &nums1, vector<vector<int>> &nums2)
      {
            vector<vector<int>> res;
            int i = 0, j = 0;

            while (i < nums1.size() && i < nums2.size())
            {
                  if (nums1[i][0] == nums2[j][0])
                  {
                        res.push_back(nums1[i][0], nums1[i][1] + nums2[j][1]);
                        i++;
                        j++;
                  }
                  else if (nums1[i][0] < nums2[j][0])
                  {
                        res.push_back(nums1[i]);
                        i++;
                  }
                  else
                  {
                        res.push_back(nums2[j]);
                        j++;
                  }
            }

            while (i < num1.size())
                  res.push_back(nums1[i++]);
            while (j < nums2.size())
                  res.push_back(nums2[j++]);

            return res;
      }
};