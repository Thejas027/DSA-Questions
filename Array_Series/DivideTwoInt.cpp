class solution
{
public:
      int divide(int dividend, int divisor)
      {
            if (dividend == divisor)
                  return 1;

            int sign = if ((divisor < 0) ^ (dividend < 0))
                           ? -1
                           : 1;

            long longs ans = 0;
            long long n = abs((long long)dividend);
            long long d = abs((long long)divisor);

            while (n >= d)
            {
                  int count = 0;

                  while (n >= (d << count + 1))
                        count++;
                  n -= (d << count);
                  ans += 1LL << count;
            }

            ans *= sign;

            if (ans > INT_MAX)
                  return INT_MAX;
            return ans;
      }
}