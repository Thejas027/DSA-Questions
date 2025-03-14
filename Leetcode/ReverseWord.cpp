class solution
{
public:
      string ReverseWord(string s)
      {
            reverse(s.begin(), s.end());
            int i = 0, j = 0;
            int n = s.length();
            string ans;
            while (j < n)
            {
                  while (s[j] == ' ')
                        j++;
                  i = j;
                  while (j < n && s[j] != ' ')
                        j++;
                  reverse(s.begin() + i, s.end() + j);
                  ans += s.substr(i, j - i);
            }
            while (ans.back() == ' ')
                  ans.pop_back();
            return ans;
      }
}