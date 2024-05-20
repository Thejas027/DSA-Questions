////////////////////////////------abdulbari-part

// #include <bits/stdc++.h>
// using namespace std;

// int main()
// {
//       vector<int> v = {1, 2, 3, 4, 5, 6, 7};

//       // used to add the element at rear end
//       v.push_back(29);

//       // used to remove the elemet form rear end
//       v.pop_back();

//       // // normal for loop
//       // for(int i = 0; i<=v.size()-1; i++)
//       //       cout<<v[i];

//       // // for each loop
//       // for (int x : v)
//       //       cout << x;

//       // vector iterator for loop
//       vector<int>::iterator it;
//       for (it = v.begin(); it != v.end(); it++)
//             cout << *it;
// }

///////////////////////////////----strivers-part

#include <iostream>
#include <vector>
#include <string>
#include <utility>

using namespace std;

int main()
{
      vector<int> v; // creates an empty container

      v.push_back(10);    // appends the element at the rear end of vector array "v"
      v.emplace_back(20); // dynamically increases the size and inserts an element at the rear end of vector array "v"

      // pair declaration in vectors
      vector<pair<int, string>> vec;
      vec.push_back({1, "a"});
      vec.emplace_back(2, "b"); // no need for curly braces here

      // vector iterator for loop to print pairs
      for (auto it = vec.begin(); it != vec.end(); it++)
      {
            cout << "{" << it->first << ", " << it->second << "}\n";
      }

      //
      vector<int> v1(5, 10); //---->{10,10,10,10,10};
      vector<int> v2(5);     // ----> {0,0,0,0,0};
      vector<int> v3(v1);    // ---> copying of the v1 value to v3 vector

      //
      vector<int>::iterator it = v.end();
      vector<int>::iterator it = v.rend();
      vector<int>::iterator it = v.rbegin(); // on it++ gives the elements in reverse order

      // // earse function

      // v.erase(v.begin() + 1);

      // //{1,2,3,4,5}
      // v.erase(v.begin() + 2, v.begin() + 4); // output----> {1,2,5}  {start,end}

      // insert function

      // v.insert(2, 100);               // ----> output {100,100}
      // v.insert(v.begin(), 300);       // -->output {300,100,100}
      // v.insert(v.begin() + 1, 2, 10); // --->ouptut {300,2,10,100,100}

      // copying of elements form one vector to the other

      // vector<int> copy(2, 50);
      // v.insert(v.begin(), copy.begin(), copy.end());

      // swaping of two vector elemets
      //  v1 ->{10,20}
      // v2  -> {30,40}

      // v1.swap(v2); // v1->{30,40} , v2->{10,20}

      // v.clear();  // erases the entire vector

      // v.empty() // to check weather the vector is empty or not
      return 0;
}
