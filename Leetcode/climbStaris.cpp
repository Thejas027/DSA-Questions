/*
You are climbing a staircase. It takes n steps to reach the top.

Each time you can either climb 1 or 2 steps. In how many distinct ways can you climb to the top?

LEET CODE = 70
*/

class solution
{
public:
      int climbStairs(int n)
      {
            if (n == 1)
                  return 1;
            if (n == 2)
                  return 2;
            int prev1 = 1, prev2 = 2;
            int current;

            for (int i = 3; i <= n; i++)
            {
                  current = prev1 + prev2;
                  prev1 = prev2;
                  prev2 = current;
            }
            return prev2;
      }
}