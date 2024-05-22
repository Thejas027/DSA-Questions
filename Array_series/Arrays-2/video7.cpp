#include <bits/stdc++.h>
using namespace std;

// brute force approach to find the majority element form the vector where the element appears more than (N/2) times

int majorityElement1(vector<int> arr)
{

      int ele = arr[0];
      int n = arr.size();
      int count = 0;

      for (int i = 0; i < n; i++)
      {
            if (ele == arr[i])
            {
                  count++;
                  if (count > (n / 2))
                        return arr[i];
            }
      }

      return -1; // if majority element is not greater than the size of (N/2)
}

int main()
{

      vector<int> arr = {2, 2, 2, 3, 3, 4};

      int element = majorityElement1(arr);

      if (element != -1)
            cout << "majority element : " << element << endl;
      else
            cout << "element not found " << endl;
      return 0;
}