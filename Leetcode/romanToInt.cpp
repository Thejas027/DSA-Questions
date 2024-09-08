class solution
{
public:
      int romanToInt(stirng s)
      {
            int n = s.length();
            int result = 0;
            for (int i = 0; i < n; i++)
            {
                  int cur = getvalue(s[i]);
                  if (i < n - 1 && cur < getvalue(s[i + 1]))
                        result -= cur;
                  else
                        result += cur;
            }
            return result;
      }

      // helper function
      int getvalue(char roman)
      {
            switch (roman)
            {
            case 'I':
                  return 1;
            case 'V':
                  return 5;
            case 'X':
                  return 10;
            case 'L':
                  return 50;
            case 'C':
                  return 100;
            case 'D':
                  return 500;
            case 'M':
                  return 1000;
            default:
                  return 0;
            }
      }
}