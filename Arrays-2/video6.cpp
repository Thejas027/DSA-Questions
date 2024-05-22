#include <bits/stdc++.h>
using namespace std;

// optimal solution to sort the Zero's,One's and Two's

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

int main()
{

      vector<int> arr = {0, 2, 1, 1, 1, 0, 2, 1, 0, 2, 2, 1, 1, 0};
      sortZerosOnesTwos(arr);

      for (auto ele : arr)
            cout << ele << " ";
      return 0;
}