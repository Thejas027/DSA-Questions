class solution
{
public:
      checkPowerOf3(int n)
      {
            while (n > 0)
            {
                  if (n % 3 == 2)
                        return false;
                  n /= 3;
            }
            return true;
      }
}