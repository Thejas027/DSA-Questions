#include <bits/stdc++.h>
using namespace std;

int sortedArrRotation(int *arr, int size)
{
    int start = 0;
    int end = size - 1;

    while (start <= end)
    {
        int mid = start + (end - start) / 2;

        int next = (mid + 1) % size;
        int prev = (mid + size - 1) % size;

        if (arr[mid] <= arr[next] && arr[mid] >= arr[prev])
            return mid - 1;
        if (arr[start] <= arr[mid])
            start = mid + 1;
        else if (arr[mid] <= arr[prev])
            end = mid - 1;
    }
    return -1;
}

int main()
{

    int arr[] = {11, 12, 14, 18, 2, 4, 5, 8};
    int size = sizeof(arr) / sizeof(arr[0]);

    cout << "Number of rotation of sorted array : " << sortedArrRotation(arr, size) << endl;

    return 0;
}