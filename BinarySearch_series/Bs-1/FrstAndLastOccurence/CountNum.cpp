/*
program to count the number of times the target element is present in a given sorted array
using binary search method this is done with optimal TIME COMPLEXCITY.
--------TIME COMPLEXCITY == O(log n)
below program will return the count of an target element
*/

#include <bits/stdc++.h>

using namespace std;

int CountNum(int *arr, int size, int key)
{

    int start = 0;
    int end = size - 1;
    int frst, last, result;

    while (start <= end)
    {
        int mid = start + (end - start) / 2;

        if (arr[mid] < key)
            start = mid + 1;
        else
            end = mid - 1;
    }
    frst = start;

    // reseting the start and end
    start = 0;
    end = size - 1;

    while (start <= end)
    {
        int mid = start + (end - start) / 2;

        if (arr[mid] > key)
            end = mid - 1;
        else
            start = mid + 1;
    }

    last = end;

    result = last - frst + 1;

    return result;
}

int main()
{
    int arr[] = {1, 2, 2, 2, 2, 2, 2, 2, 2, 4, 5};
    int target = 2;
    int size = sizeof(arr) / sizeof(arr[0]);

    cout << "Count of target element: " << CountNum(arr, size, target) << endl;

    return 0;
}