#include <bits/stdc++.h>
using namespace std;

// optimal solution to sort the Zero's,One's and Two's
// BASED ON DUCTH NATIONAL FLAG ALGO
void sortZerosOnesTwos(vector<int> &arr)
{
      int n = arr.size();
      int low = 0;
      int mid = 0;
      int high = n - 1;

      while (mid <= high)
      {
            if (arr[mid] == 0)
            {
                  swap(arr[low], arr[mid]);
                  low++;
                  mid++;
            }

            else if (arr[mid] == 1)
                  mid++;

            else
            {
                  swap(arr[mid], arr[high]);
                  high--;
            }
      }
}

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

      vector<int> arr = {0, 2, 1, 1, 1, 0, 2, 1, 0, 2, 2, 1, 1, 0};
      // sortArr(arr);
      
      //////////////////
      sortZerosOnesTwos(arr);
      for (auto ele : arr)
            cout << ele << " ";
      return 0;
}