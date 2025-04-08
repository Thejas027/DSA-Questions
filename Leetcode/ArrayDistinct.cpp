class
{
public:
      int minimumOperation(vector<int> &nums)
      {
            vector<bool> v(128);
            for (int i = nums.size() - 1; i >= 0; i--)
            {
                  if (v[nums[i]])
                        return i / 3 + 1;
                  v[nums[i]] = true;
            }
            return 0;
      }
}