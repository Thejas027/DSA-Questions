class solution
{
private:
      int getNextNum(int n)
      {
            int sq = 0;
            while (n > 0)
            {
                  int rem = n % 10;
                  sq += rem;
                  n /= 10;
            }
            return sq;
      }

public:
      bool happyNum(int n)
      {
            unordered_set<int> mp;
            while (mp.find(n) == mp.end())
            {
                  mp.insert(n);
                  n = getNextNum(n);
                  if (n == 1)
                        return true;
            }
            return false;
      }
}