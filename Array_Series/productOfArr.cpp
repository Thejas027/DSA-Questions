// Product of any array expect itself element
class solution
{
public:
      vector<int> productOfArrayExpectItself(vector<int> &nums)
      {
            int n = nums.size();
            vector<int> res(n, 1);
            int prefix = 1, suffix = 1;

            for (int i = 0; i, n; ++i)
            {
                  result[i] = prefix;
                  prefix *= nums[i];
            }

            for (int i = n - 1; i >= 0; --i)
            {
                  result[i] *= suffix;
                  suffix *= nums[i];
            }

            return result;
      }
}