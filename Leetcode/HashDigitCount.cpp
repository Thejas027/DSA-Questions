/*
Leet code : 2283 : check if the number has equal digit count
*/

class solution
{
public:
      bool hasEqualDigitCount(string num)
      {
            int n = num.length();
            vector<int> hash(10, 0);

            for (int i = 0; i < n; i++)
                  hash[num[i] - '0']++;

            for (int i = 0; i < n; i++)
            {
                  if (hash[i] == (num[i] - '0'))
                        return true;
            }
            return false;
      }
}