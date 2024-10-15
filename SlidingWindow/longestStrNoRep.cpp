/* Longest substring   with at most K distinct character  */

// Brute force approach

class solution
{
public:
      int longestSubStr(string s, int k)
      {
            int maxlen = 0;
            int n = s.size();
            unordered_map<char, int> mp;

            for (int i = 0; i < n; i++)
            {
                  mp.clear();
                  for (int j = i; j < n; j++)
                  {
                        mp[s[j]]++;
                        if (mp.size() <= k)
                              maxlen = max(maxlen, j - i + 1);

                        else
                              break;
                  }
            }
            return maxlen;
      }
}

// OPTIMAL -1
// TC = O(2n) SC = O(256)

class solution
{
public:
      int fnx(string s, int k)
      {
            int l = 0, r = 0, maxlen = 0;
            int n = s.size();
            unordered_map<char, int> mp;

            while (r < n)
            {
                  mp[s[r]]++;
                  while (mp.size() > k)
                  {
                        mp[s[l]]--;
                        if (mp[s[l]] == 0)
                              mp.erase(s[l]);
                        l++;
                  }

                  if (mp.size() <= k)
                        maxlen = max(maxlen, r - l + 1);
            }
            return maxlen;
      }
}

// OPTIMAL - 2
// TC = O(n)

class solution
{
public:
      int fnx(string s, int k)
      {
            int l = 0, r = 0 maxlen = 0;
            int n = s.size();
            unordered_map<char, int> mp;

            while (r < n)
            {
                  mp[s[r]]++;

                  if (mp.size() > k)
                  {
                        mp[s[l]]--;

                        if (mp[s[l]] == 0)
                              mp.erase(s[l]);
                        l++;
                  }

                  if (mp.size() <= k)
                        maxlen = max(maxlen, r - l + 1);
            }
            return maxlen;
      }
}