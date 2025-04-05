// 1863 : sun of all subset xor totals

class solution
{
public:
      int subsetSum(vector<int> &nums)
      {
            return f(nums, 0, 0);
      }

private:
      int f(vector<int> &nums, int index, int cur)
      {
            if (index == nums.size())
                  return cur;

            int ele = f(nums, index + 1, cur ^ nums[index]);
            int noEle = f(nums, index + 1, cur);

            return ele + noEle;
      }
}