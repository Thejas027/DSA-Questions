/*
Given a string s of zeros and ones, return the maximum score after splitting the string into two non-empty substrings (i.e. left substring and right substring).

The score after splitting a string is the number of zeros in the left substring plus the number of ones in the right substring.
*/

// Brute  force solution
class solution
{
public:
      int maxCOunt(string s)
      {
            int ans = 0;
            for (int i = 0; i < s.size() - 1; i++)
            {
                  int cur = 0;
                  for (int j = 0; j <= i; j++)
                  {
                        if (s[j] == '1')
                              cur++;
                  }

                  for (int j = i; j < s.size(); j++)
                  {
                        if (s[j] == '0')
                              cur++;
                  }
                  ans = max(ans, cur);
            }
            return ans;
      }
}

// better approach
class solution
{
public:
      int maxCount(string s)
      {
            int ones = count(s.begin(), s.end(), '1');
            int zeros = 0;
            int ans = 0;
            for (int i = 0; i < s.size() - 1; i++)
            {
                  if (s[i] == '1')
                        ones--;
                  else
                        zeros++;
                  ans = max(ans, ones + zeros);
            }
            return ans;
      }
}