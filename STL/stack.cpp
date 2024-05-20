#include <bits/stdc++.h>
using namespace std;

int main()
{
      stack<int> st;
      st.push(10);
      st.push(20);
      st.push(30);

      cout << "the top most element : " << st.top() << endl; // gives the top element of a stack
      cout << "The size of a stack : " << st.size() << endl;

      stack<int> stck = st; // creating a copy
      while (!stck.empty())
      {
            cout << stck.top() << " ";
            stck.pop();
      }

      return 0;
}