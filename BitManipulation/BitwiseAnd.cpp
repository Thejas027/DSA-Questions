// 2275 : Largest Combination with Bitwise and Greater than zero
class solution
{
public:
      int largestCombination(vector<int> &candidates)
      {
            int maxCount = 0;
            for (int i = 0; i < 32; i++)
            {
                  int count = 0;
                  for (int num : candidates)
                  {
                        if (num & (1 << i))
                              count++;
                  }
                  maxCount = max(count, maxCount);
            }
            return maxCount;
      }
}