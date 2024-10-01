/*
program to find the maxmium element in a given Bitonic array [array which gradually increases upto point and decrases after the point]

    max ele in bitoinc array  ==  finding peak element
    arr[] : 2 4 5 10 8 6 1 ----> example of bitonic array
        need to return 10 as max element in a given bitonic array
*/

#include <bits/stdc++.h>
using namespace std;

class BitonicArray
{
public:
      int MaxEle(vector<int> arr)
      {
            int n = arr.size();
            int start = 0;
            int end = n - 1;

            while (start <= end)
            {
                  int mid = start + (end - start) / 2;

                  if (mid > 0 && mid < n - 1)
                  {
                        if (arr[mid] > arr[mid + 1] && arr[mid] > arr[mid - 1])
                              return arr[mid];
                        else if (arr[mid] < arr[mid + 1])
                              start = mid + 1;
                        else
                              end = mid - 1;
                  }
                  else if (mid == 0)
                  {
                        if (arr[0] > arr[1])
                              return arr[0];
                        else
                              return arr[1];
                  }
                  else if (mid == n - 1)
                  {
                        if (arr[n - 1] > arr[n - 2])
                              return arr[n - 1];
                        else
                              return arr[n - 2];
                  }
            }
            return -1; // if max element not present in the bitonic array then -1 is returned .
      }
};

int main()
{
      vector<int> arr = {2, 4, 55, 10, 6, 1};
      BitonicArray b;
      cout << "Max element in a given bitonic array : " << b.MaxEle(arr) << endl;
      return 0;
}