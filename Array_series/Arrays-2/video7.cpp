#include <bits/stdc++.h>
using namespace std;

// brute force approach to find the majority element form the vector where the element appears more than (N/2) times

int majorityElement1(vector<int> arr)
{

      int n = arr.size();

      for (int i = 0; i < n; i++)
      {
            int count = 0;
            for (int j = 0; j < n; j++)
            {
                  if (arr[i] == arr[j])
                        count++;
            }
            if (count > (n / 2))
                  return arr[i];
      }

      return -1; // if majority element is not greater than the size of (N/2)
}

// better solution using maps
int majorityElement2(vector<int> arr)
{
      int n = arr.size();

      map<int, int> mp;
      for (int i = 0; i < n; i++)
            mp[arr[i]]++;

      for (auto ele : mp)
            if (ele.second > (n / 2))
                  return ele.first;

      return -1;
}

// optimal soultion

int majorityElement3(vector<int> arr)
{
      int n = arr.size();
      int ele = 0;
      int count = 0;

      for (int i = 0; i < n; i++)
      {
            if (count == 0)
            {
                  count++;
                  ele = arr[i];
            }

            if (ele == arr[i])
                  count++;
            else
                  count--;
      }

      int count1;
      for (int i = 0; i < n; i++)
      {
            if (arr[i] == ele)
                  count1++;

            if (count1 > (n / 2))
                  return ele;
      }
      return -1;
}

int main()
{

      vector<int> arr = {2, 2, 2, 2, 4, 5, 3};

      int element = majorityElement3(arr);

      if (element != -1)
            cout << "majority element : " << element << endl;
      else
            cout << "element not found " << endl;
      return 0;
}