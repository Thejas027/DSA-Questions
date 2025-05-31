class solution
{
public:
      int findContnetChildren(vector<int> &g, vector<int> &s)
      {
            sort(g.begin(), g.end());
            sort(s.begin(), s.end());

            int r = 0, l = 0;

            while (l < m && r < n)
            {
                  if (s[l] <= g[r])
                        r++;
                  l++;
            }
            return r;
      }
}