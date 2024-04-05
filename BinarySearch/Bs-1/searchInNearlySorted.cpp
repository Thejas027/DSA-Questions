#include <bits/stdc++.h>
using namespace std;

int searchInNearlySortedArr(int *arr, int size, int key)
{

    int start = 0;
    int end = size - 1;

    while (start <= end)
    {
        int mid = start + (end - start) / 2;

        if (key == arr[mid])
            return mid;

        if (mid - 1 >= start && arr[mid - 1] == key)
            return mid - 1;

        if (mid + 1 <= end && arr[mid + 1] == key)
            return mid + 1;

        if (arr[mid] < key)
            start = mid + 2;
        else
            end = mid - 2;
    }

    return -1; // if elememt not found in the nearly sorted array it returns -1
}

int main()
{
    int arr[] = {5, 10, 30, 20, 40};
    int size = sizeof(arr) / sizeof(arr[0]);

    int key = 10;

    cout << "Element found at idx : " << searchInNearlySortedArr(arr, size, key) << endl;

    return 0;
}