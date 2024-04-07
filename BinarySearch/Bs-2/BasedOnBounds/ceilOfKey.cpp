/*
program to find the ceil of a given key element
    ceil of key == LOWER BOUND
    ex arr[] = 1 4 6 8
    key = 5
    ceil of 5 is 6
*/

#include <bits/stdc++.h>
using namespace std;

class BinarySearch
{
public:
    int Ceil(vector<int> &arr, int key)
    {
        int n = arr.size();
        int start = 0;
        int end = n - 1;
        int result = n;
        while (start <= end)
        {
            int mid = start + (end - start) / 2;

            if (arr[mid] >= key)
            {
                result = arr[mid];
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
    vector<int> arr = {1, 4, 6, 8};
    int key = 5;
    BinarySearch b;
    cout << "The lower bound of the given key element is at index : " << b.Ceil(arr, key) << endl;
    return 0;
}