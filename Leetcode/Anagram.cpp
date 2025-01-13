class solution
{
public:
      bool isValid(string s, string t)
      {
            sort(s.begin(), s.end());
            sort(t.begin(), s.end());

            return s == t;
      }
}