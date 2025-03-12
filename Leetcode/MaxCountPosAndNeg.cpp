class solution
{
public:
      int maxPosNegCount(vector<int> &nums)
      {
            int posCount = 0;
            int negCount = 0;
            for (auto it : nums)
            {
                  if (it > 0)
                        posCount++;
                  else if (it < 0)
                        negCount++;
            }
            return max(posCount, negCount);
      }
}