class solution
{
      bool isPalindrome(string s)
      {
            vector<char> str;

            for (char c : s)
            {
                  if (isalnum(c))
                        str.push_back(c);
            }

            int n = str.size();
            for (int i = 0; i < n / 2; i++)
            {
                  if (str[i] != str[n - i - 1])
                        return false;
            }
            return true;
      }
}
