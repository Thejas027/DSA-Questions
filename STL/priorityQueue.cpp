#include <bits/stdc++.h>
using namespace std;

int main()
{

      priority_queue<int> pq;
      pq.push(2);
      pq.push(1);
      pq.push(6); //{6,2,1}

      pq.top();         // 6
      cout << pq.pop(); // gives 6

      // minimum Heap
      priority_queue<int, vector<int>, greater<int>> pq;
      pq.push(5);
      pq.push(2);
      pq.push(8); //{2,5,8}

      pq.top(); // 2
      return 0;
}