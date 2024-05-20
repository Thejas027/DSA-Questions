#include <bits/stdc++.h>
using namespace std;

int main()
{

      map<int, string> m;

      // initailazing the key and value
      m.insert(pair<int, string>(1, "jhon"));
      m.insert(pair<int, string>(2, "jay"));
      m.insert(pair<int, string>(3, "ravi"));

      map<int, string>::iterator it;
      for (it = m.begin(); it != m.end(); it++)
            cout << it->first << " " << it->second << endl;

      map<int, string>::iterator itr1;
      itr1 = m.find(2);
      cout << "value found at" << endl;

      cout << itr1->first << " " << itr1->second;
}