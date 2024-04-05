#include <bits/stdc++.h>
using namespace std;

int FloorElementInSortedArr(int *arr, int size, int key)
{

    int start = 0;
    int end = size - 1;
    int result = -1;
    while (start <= end)
    {
        int mid = start + (end - start) / 2;

        if (arr[mid] == key)
            return arr[mid];
        else if (arr[mid] < key)
        {
            result = arr[mid];
            start = mid + 1;
        }
        else if (arr[mid] > key)
            end = mid - 1;
    }
    return result;
}

int main()
{

    int arr[] = {1, 2, 3, 4, 8, 10, 12, 13};
    int size = sizeof(arr) / sizeof(arr[0]);
    int target = 10;

    cout << "The floor value of given target elemet : " << FloorElementInSortedArr(arr, size, target);
    return 0;
}