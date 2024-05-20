#include <bits/stdc++.h>
using namespace std;

int main()
{
      list<int> v = {1, 2, 3, 4, 5, 6, 7};

      // used to add the element at rear end
      v.push_back(29);

      // used to remove the elemet form rear end
      v.pop_back();

      // // normal for loop
      // for(int i = 0; i<=v.size()-1; i++)
      //       cout<<v[i];

      // // for each loop
      // for (int x : v)
      //       cout << x;

      // list iterator for loop
      list<int>::iterator it;
      for (it = v.begin(); it != v.end(); it++)
            cout << *it;
}