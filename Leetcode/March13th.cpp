/*There are several consecutive houses along a street, each of which has some money inside. There is also a robber, who wants to steal money from the homes, but he refuses to steal from adjacent homes.

The capability of the robber is the maximum amount of money he steals from one house of all the houses he robbed.

You are given an integer array nums representing how much money is stashed in each house. More formally, the ith house from the left has nums[i] dollars.

You are also given an integer k, representing the minimum number of houses the robber will steal from. It is always possible to steal at least k houses.

Return the minimum capability of the robber out of all the possible ways to steal at least k houses.
*/

class solution
{
public:
      int minCapability(vector<int> &nums, int k)
      {
            int start = 1, end = *max_element(nums.begin(), nums.end()), n = nums.size();

            while (start < end)
            {
                  int mid = (start + end) / 2;
                  int theft = 0;

                  for (int i = 0; i < n; i++)
                  {
                        if (nums[i] <= mid)
                        {
                              theft++;
                              i++;
                        }
                  }

                  if (theft >= k)
                        end = mid;
                  else
                        start = mid + 1;
            }
            return start;
      }
}