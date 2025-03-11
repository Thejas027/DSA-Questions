// Brute Force Approach

class solution
{
public:
      int numberOfSubstring(string s)
      {
            int count = 0;

            for (int i = 0; i < s.length(); i++)
            {
                  for (int j = i; j < s.length(); j++)
                  {
                        string str = s.substr(i, j - i + 1);
                        if (containsABC(str))
                              count++;
                  }
            }
            return count;
      }

private:
      bool containsABC(string &s)
      {
            bool hasA = false, hasB = false, hasC = false;

            for (auto c : s)
            {
                  if (c == 'a')
                        hasA = true;

                  if (c == 'b')
                        hasB = true;
                  if (c == 'c')
                        hasC = true;
            }

            return hasA && hasB && hasC;
      }
}

// optimal solution
// Time Complexity: O(n)
class solution
{
public:
      int numberOfSubstrings(string s)
      {
            int count = 0, start = 0;
            unordered_map<char, int> freq;

            for (int i = 0; i < s.length(); i++)
            {
                  freq[s[i]]++;

                  while (freq['a'] > 0 && freq['b'] > 0 && freq['c'] > 0)
                  {
                        count += (s.length() - right);
                        freq[s[start]]--;
                        start++;
                  }
            }
            return count;
      }
}