// function to convert decimal to binary

string deciToBin(int n)
{
      string res = "";
      while (n != 1)
      {
            if (n % 2 == 1)
                  res += "1";
            else
                  res += "0";
            n /= 2;
      }
      reverse(res.begin(), res.end());
      return res;
}

// function to convert binary to decimal

int BinToDeci(string s)
{
      int len = s.length();
      int powerTwo = 1, num = 0;

      for (int i = 0; i < len - 1; i++)
      {
            if (s[i] == '1')
                  num += powerTwo;

            powerTwo *= 2;
      }
      return num;
}

// swap two numbers without using temp var

void swap(int &a, int &b)
{
      a = a + b;
      b = a - b;
      a = a - b;
}

// check if the ith bit is set or not

bool isSet(int n, int i) return n & (i << 1); // using left shift operator

bool IsSet(int n, int i) return (n >> i) & 1; // using right shift operator

