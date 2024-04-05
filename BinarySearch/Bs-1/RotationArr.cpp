/*
program to find how many times the sorted array is roated
using binary search concept this is done
below code will return how many times the sorted array is rotated

index of smallest array element = number of times it has rotated

*/

#include <bits/stdc++.h>
using namespace std;

int sortedArrRotation(int *arr, int size)
{
    int start = 0;
    int end = size - 1;

    while (start <= end)
    {
        // base case -- if array is not rotated
        if (arr[start] <= arr[end])
            return start;

        int mid = start + (end - start) / 2;
        int next = (mid + 1) % size;
        int prev = (mid + size - 1) % size;

        if (arr[mid] <= arr[next] && arr[mid] <= arr[(mid - 1 + size) % size])
            return mid;

        if (arr[start] <= arr[mid])
            start = mid + 1;

        else if (arr[mid] <= arr[prev])
            end = mid - 1;
    }
    return -1; // rotation count not found
}

int main()
{

    int arr[] = {11, 12, 13, 14, 2, 5, 6, 7};
    int size = sizeof(arr) / sizeof(arr[0]);

    cout << "Number of rotation of sorted array : " << sortedArrRotation(arr, size) << endl;

    return 0;
}