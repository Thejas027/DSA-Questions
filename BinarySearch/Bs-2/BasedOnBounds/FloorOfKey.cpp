/*
program to find the floor of value of a given key element in a given array

FLOOR = LARGEST NUMBER IN A ARRAY BUT LESS THAN KEY VALUE

ex : arr[] = 1 4 6 8
key = 5
 floor value of 5 = 4
*/

#include <bits/stdc++.h>
using namespace std;

class BinarySearch
{
public:
    int Floor(vector<int> &arr, int key)
    {
        int n = arr.size();
        int start = 0;
        int end = n - 1;
        int result = n;
        while (start <= end)
        {
            int mid = start + (end - start) / 2;

            if (arr[mid] <= key)
            {
                result = arr[mid];
                start = mid + 1;
            }
            else
                end = mid - 1;
        }
        return result;
    }
};

int main()
{
    vector<int> arr = {1, 4, 6, 8};
    int key = 1111;
    BinarySearch b;
    cout << "The lower bound of the given key element is at index : " << b.Floor(arr, key) << endl;
    return 0;
}