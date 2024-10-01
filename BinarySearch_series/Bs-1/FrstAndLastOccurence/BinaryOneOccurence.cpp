/*
program to find the first occurence of 1 in a binary sorted array of infite array elements
*/

#include <bits/stdc++.h>
using namespace std;

class Bsearch
{
public:
    int binarySearch(int *arr, int start, int end, int key)
    {
        int result = -1;

        while (start <= end)
        {
            int mid = start + (end - start) / 2;

            if (arr[mid] == key)
            {
                result = mid;
                end = mid - 1;
            }
            else if (arr[mid] < key)
                start = mid + 1;
        }
        return result;
    }

    int findIdx(int *arr, int key)
    {
        int start = 0;
        int end = 1;

        while (key > arr[end])
        {
            start = end;
            end = end * 2;
        }

        int b = binarySearch(arr, start, end, key);
        return b;
    }
};
int main()
{
    int arr[] = { 0, 0, 0, 0, 1, 1, 1};
    int key = 1;
    Bsearch b;
    cout << "index of first one occurence in binary infinite sorted array : " << b.findIdx(arr, key) << endl;

    return 0;
}