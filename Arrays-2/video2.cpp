// funcitons for union and intersection of arrays is pending

#include <bits/stdc++.h>
using namespace std;

// // function that takes input in sequencetinal manner using "iota -- of <numeric>"
// void readElemets(vector<int> &arr)
// {
//       int n;
//       cout << "Enter the size of an array : ";
//       cin >> n;

//       arr.resize(n);
//       iota(arr.begin(), arr.end(), 1);
// }

// function to print all the array elements
void printArray(const vector<int> &arr)
{
      for (const int &num : arr)
            cout << num << " ";
      cout << endl;
}

// function to rotate the array elements by one position

// void arrRotation(vector<int> &arr)
// {
//       int n = arr.size();
//       int ele = arr[0];
//       for (int i = 0; i < n; i++)
//       {
//             arr[i] = arr[i + 1];
//       }
//       arr[n - 1] = ele;

//       for (int j = 0; j < n; j++)
//       {
//             cout << arr[j] << " ";
//       }
// }

void arrRotation(vector<int> &arr)
{
      if (arr.empty())
            return;
      rotate(arr.begin(), arr.begin() + 1, arr.end());
}

// function to rotate array elements for d places
void arrRotation2(vector<int> &arr, int d)
{
      int n = arr.size();
      d = d % n;

      if (n == 0)
            return;
      rotate(arr.begin(), arr.begin() + d, arr.end());
}

// linear search function using standard libraries
int lSearch(vector<int> arr, int key)
{
      auto it = find(arr.begin(), arr.end(), key);
      if (it != arr.end())
            return distance(arr.begin(), it); // key found case
      else
            return -1; // key not found case
}

// funciton moves all the zero's element to end of an array , its a brute force appraoch
void moveZeros(vector<int> &arr)
{
      int n = arr.size();
      vector<int> arr2;

      for (int i = 0; i < n; i++)
            if (arr[i] != 0)
                  arr2.push_back(arr[i]);

      int n2 = arr2.size();
      for (int i = n2; i < n; i++)
            arr2.push_back(0);

      // for (int i = 0; i < n; i++)
      //       cout << arr2[i] << " ";
}

// optimal solution with no space complexcity.(two pointer approach)
void moveZeros2(vector<int> &arr)
{
      int n = arr.size();
      int j = -1;
      for (int i = 0; i < n; i++)
      {
            if (arr[i] == 0)
            {
                  j = i;
                  break;
            }
      }

      for (int i = j + 1; i < n; i++)
      {
            if (arr[i] != 0)
            {
                  swap(arr[i], arr[j]);
                  j++;
            }
      }
}

// function that moves all the zeros in a array to the end of an array
void sortArr(vector<int> &arr)
{
      int c1 = 0, c2 = 0, c3 = 0;
      int n = arr.size();
      for (int i = 0; i < n; i++)
      {
            if (arr[i] == 0)
                  c1++;
            else if (arr[i] == 1)
                  c2++;
            else if (arr[i] == 2)
                  c3++;
      }

      // to print the array

      for (int i = 0; i < c1; i++)
            cout << 0 << " ";
      for (int i = c1; i < c1 + c2; i++)
            cout << 1 << " ";
      for (int i = c1 + c2; i < n; i++)
            cout << 2 << " ";
}

int main()
{
      vector<int> arr = {1, 3, 4, 5, 6, 7, 8};

      int d;
      cout << "enter the number place to be rotated :";
      cin >> d;

      a.arrRotation2(arr, d);
      printArray(arr);

      cout << "element found at index : " << lSearch(arr, 3);

      //
      vector<int> arr2 = {1, 0, 0, 2, 0, 3, 4, 0, 0, 5, 0, 0};
      moveZeros2(arr2);
      printArray(arr2);

      //
      vector<int> arr3 = {0, 2, 0, 1, 2, 1, 0, 2, 0};
      sortArr(arr3);
      return 0;
}