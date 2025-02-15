#include <bits/stdc++.h>
using namespace std;

string divideString(string s, int k)
{
      int n = s.size();

      // adding the string to a vector
      vector<int> hash(256, -1);

      for (char c = 'a'; c <= 'z'; c++)
            hash[c] = c - 'a';

      int subStr = n / k;
      string res = "";

      for (int i = 0; i < subStr; i++)
      {
            string subString = s.substr(i * k, k);

            int sum = 0;
            for (char c : subString)
                  sum += hash[c];

            int hashedChar = sum % 26;
            char hashedCharAsLetter = 'a' + hashedChar;
            res += hashedCharAsLetter;
      }

      return res;
}

int main()
{
      string s ="mxz";
      int k = 3;
      cout << divideString(s, k) << endl;
}