#include <bits/stdc++.h>
using namespace std;

string processString(string s)
{
      vector<string> v;
      stringstream ss(s);
      string word;

      // split the string
      while (getline(ss, word, '='))
      {
            if (!word.empty())
            {
                  v.push_back(word);
            }
      }

      // to erase the first part
      if (!v.empty())
      {
            v.erase(v.begin());
      }

      // combining the remaining parts
      string result = "";
      for (size_t i = 0; i < v.size(); i++)
      {
            result += v[i];
            if (i != v.size() - 1)
            {
                  result += "\t";
            }
      }

      return result;
}

int main()
{
      string s = "Root/MSg_0/Sig_1/";
      cout << processString(s);
      return 0;
}