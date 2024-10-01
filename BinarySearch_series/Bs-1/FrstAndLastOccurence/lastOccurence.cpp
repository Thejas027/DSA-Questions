/*
program which retuns the last index of an element which appears more than once
using binary search this is done for optimal time complexcity
below code return the index of last occurence of target element
*/

#include <bits/stdc++.h>
using namespace std;

int LastOccurence(int *arr, int size, int key)
{
    int start = 0;
    int end = size - 1;
    int result = -1;

    while (start <= end)
    {
        int mid = start + (end - start) / 2;

        if (key == arr[mid])
        {
            result = mid;
            start = mid + 1;
        }
        else if (key > arr[mid])
            start = mid + 1;
        else
            end = mid - 1;
    }

    return result;
}

int main()
{
    int arr[] = {1, 2, 3, 3, 3, 3, 3, 4, 5, 6, 7};
    int size = sizeof(arr) / sizeof(arr[0]);
    int key = 3;

    int last_occurrence_index = LastOccurence(arr, size, key);

    if (last_occurrence_index != -1)
    {
        cout << "Last occurrence of " << key << " is at index " << last_occurrence_index << endl;
    }
    else
    {
        cout << "Element " << key << " not found in the array" << endl;
    }
    return 0;
}