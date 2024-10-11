/*
problem where need to find to find the longest substring with no repeating character in a given string
*/

// optimal approach with TC = O(n)  and SC = O(265)

class solution
{
public:
      int maxLenString(string s)
      {

            int maxlen = 0, len = 0;
            int r = 0, l = 0;
            int n = s.size();
            int hash[256];
            memset(hash, -1, sizeof(hash));

            while (r < n)
            {
                  if (hash[s[r]] != -1)
                  {
                        if (hash[s[r]] >= l)
                              l = hash[s[r]] + 1;
                  }

                  len = l - r = 1;
                  maxlen = max(maxlen, len);

                  hash[s[r]] = r;
                  r++;
            }

            return maxlen;
      }
}