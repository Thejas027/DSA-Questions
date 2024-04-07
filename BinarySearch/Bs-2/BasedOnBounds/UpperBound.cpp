/*
program to find the upper bound index of a key element in a given sorted array
upper bound =  SMALLEST INDEX SUCH THAT arr[mid] > key
*/
#include <bits/stdc++.h>
using namespace std;

class BinarySearch
{
public:
    int upperbound(vector<int> &arr, int key)
    {
        int n = arr.size();
        int start = 0;
        int end = n - 1;
        int result = n;
        while (start <= end)
        {
            int mid = start + (end - start) / 2;

            if (arr[mid] > key)
            {
                result = mid; // if zero based index value is required then make res = mid - 1;
                end = mid - 1;
            }
            else
                start = mid + 1;
        }
        return result;
    }
};

int main()
{
    vector<int> arr = {2, 3, 6, 7, 8, 8, 11, 11, 11, 12};
    int key = 11;
    BinarySearch b;
    cout << "The upperr bound of the given key element is at index[zero based index] : " << b.upperbound(arr, key) << endl;
    return 0;
}