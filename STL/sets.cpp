#include <bits/stdc++.h>
using namespace std;

int main()
{
      set<int> s;
      s.insert(2);
      s.emplace(4);
      s.insert(3); // {2,3,4}

      auto it = s.find(2);

      s.erase(3);

      return 0;
}