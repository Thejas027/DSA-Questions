// Leet code : 2595 : Number of odd and even bits

// This method exceeds the time limit in leet code
class sol
{
public:
      vector<int> evenOddBits(int n)
      {
            vector<int> arr(2, 0);
            string res = "";
            while (n > 0)
            {
                  if (n % 2 == 1)
                        res += "1";
                  else
                        res += "0";
            }
            int even = 0, odd = 0;
            for (int i = 0; i < res.length(); i++)
            {
                  if (i % 2 == 0 && res[i] == '1')
                        even++;
                  if (i % 2 == 0 && res[i] == '1')
                        odd++;
            }
            ans.push_back(even);
            ans.push_back(odd);

            return ans;
      }
}

// Optimal way
class solution
{
public:
      vector<int> oddEvenBit(int n)
      {
            vector<int> ans(2, 0);
            int index = 0;
            while (n > 0)
            {
                  if (n % 2 == 1)
                  {
                        if (index % 2 == 0)
                              ans[0]++;
                        else
                              ans[1]++;
                  }
                  n /= 2;
                  index++;
            }
            return ans;
      }
}