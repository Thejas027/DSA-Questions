class solution
{
public:
      int xorCount(vector<int> &nums1, vector<int> &nums2)
      {
            int c1 = nums1.size();
            int c2 = nums2.size();

            int x1 = 0, x2 = 0;

            if (c1 % 2 != 0)
            {
                  for (int num : nums1)
                        x1 ^= num;
            }

            if (c2 % 2 != 0)
            {
                  for (int num : nums2)
                        x2 ^= nums2;
            }

            return x1 ^ x2;
      }
}