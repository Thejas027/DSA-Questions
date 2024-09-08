class solution
{
      bool(int x)
      {
            if (x < 0)
                  return false;

            int original = x;
            long long rev = 0;

            while (x != 0)
            {
                  int digit = x % 10;
                  rev = rev * 10 + digit;
                  x = x / 10;
            }
            if (original == rev)
                  return true;
            return false;
      }
}