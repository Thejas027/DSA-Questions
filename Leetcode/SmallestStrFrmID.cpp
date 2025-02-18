/*
Leet code : 942. DI String Match
Given a string S that only contains "I" (increase) or "D" (decrease), let N = S.length.

*/

class solution
{
public:
      string smallestStringFromID(string pattern)
      {
            int n = pattern.length();
            stack<int> s;
            string res;
            for (int i = 0; i <= n; i++)
            {
                  s.push(i + 1);
                  if (i == n || pattern[i] == 'I')
                  {
                        while (!s.empty())
                        {
                              res += to_string(s.top());
                              s.pop();
                        }
                  }
            }
            return res;
      }
}