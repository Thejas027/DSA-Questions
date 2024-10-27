class solution
{
public:
      int countKInteger(vector<int> &nums, int k)
      {
            int count = 0;
            int n = nums.size();
            for (int i = 0; i < n; i++)
            {
                  map<int , int> mp;
                  for (int j = 0; j < n; j++)
                  {
                        mp[nums[i]]++;
                        if (mp.size() == k)
                              count++;
                        else if (mp.size() > k)
                              break;
                  }
            }
            return count;
      }
}