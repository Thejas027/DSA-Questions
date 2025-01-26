class solution
{
public:
      int numberofBits(int n)
      {
            string binray = "";
            while (n > 0)
            {
                  binray = (n % 2 == 0 ? "0" : "1") + binary;
                  n /= 2;
            }

            int count = 0;
            for (int i = 0; i < binray.length(); i++)
            {
                  if (binray[i] == '1')
                        count++;
            }
            return count;
      }
}