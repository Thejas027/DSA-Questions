/*Write an algorithm to determine if a number n is happy.

A happy number is a number defined by the following process:

Starting with any positive integer, replace the number by the sum of the squares of its digits.
Repeat the process until the number equals 1 (where it will stay), or it loops endlessly in a cycle which does not include 1.
Those numbers for which this process ends in 1 are happy.
Return true if n is a happy number, and false if not.*/

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