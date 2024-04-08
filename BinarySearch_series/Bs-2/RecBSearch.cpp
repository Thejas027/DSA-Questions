/*
Recursive binary search program to find the key element
*/
#include <bits/stdc++.h>
using namespace std;

int RecursiveBsearch(vector<int> &arr, int start, int end, int key)
{
    if (start > end)
        return -1;
    int mid = start + (end - start) / 2;

    if (arr[mid] == key)
        return mid;
    if (arr[mid] > key)
        return RecursiveBsearch(arr, start, mid - 1, key);
    if (arr[mid] < key)
        return RecursiveBsearch(arr, mid + 1, end, key);

    return -1; // if key not found in the given array it reurns -1
}

int main()
{
    vector<int> arr = {1, 3, 5, 7, 9, 10};
    int start = 0;
    int end = arr.size() - 1;
    int key = 1;

    cout << "Key element found at index : " << RecursiveBsearch(arr, start, end, key) << endl;
    return 0;
}