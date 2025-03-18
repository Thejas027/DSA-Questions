class solution
{
public:
      int longestNiceSubArray(vector<int> &nums)
      {
            int left = 0, xor1 = 0, len = 0;
            for (int right = 0; right < nums.size(); right++)
            {
                  while ((xor1 & nums[right]) != 0)
                  {
                        xor1 ^= nums[right];
                        left++;
                  }
                  xor1 |= nums[right];
                  len = max(len, right - left + 1);
            }
            return len;
      }
}