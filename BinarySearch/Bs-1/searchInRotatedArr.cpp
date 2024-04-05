#include <bits/stdc++.h>
using namespace std;

int binarySearch(int *arr, int start, int end, int key)
{
    while (start <= end)
    {
        int mid = start + (end - start) / 2;

        if (key == arr[mid])
            return mid;
        if (key < arr[mid])
            end = mid - 1;
        else
            start = mid + 1;
    }
    return -1;
}

int searchEleInRotatedArr(int *arr, int size, int key)
{
    int start = 0;
    int end = size - 1;
    int idx = -1;
    while (start <= end)
    {
        int mid = start + (end - start) / 2;

        int next = (mid + 1) % size;
        int prev = (mid + size - 1) % size;

        if (arr[mid] <= arr[next] && arr[mid] >= arr[prev])
        {
            idx = mid;
            break;
        }
        if (arr[start] <= arr[mid])
            start = mid + 1;
        else if (arr[mid] >= arr[end])
            end = mid - 1;
    }

    if (idx != -1)
    {
        int b1 = binarySearch(arr, 0, idx - 1, key);
        int b2 = binarySearch(arr, idx - 1, size - 1, key);

        if (b1 != -1)
            return b1;

        if (b2 != -1)
            return b2;
    }

    return -1; // if element not found in the sorted rotated array -1 is returned
}

int main()
{

    int arr[] = {11, 12, 14, 18, 2, 4, 5, 8};
    int size = sizeof(arr) / sizeof(arr[0]);
    int key = 11;
    cout << "element found at index : " << searchEleInRotatedArr(arr, size, key) << endl;

    return 0;
}