/*
program which retuns the first index of an element which appears more than once
using binary search this is done for optimal time complexcity
below code return the index of first occurence of target element
*/
#include <bits/stdc++.h>
using namespace std;

int FirstOccurence(int *arr, int size, int key)
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
            end = mid - 1;
        }
        else if (key < arr[mid])
        {
            end = mid - 1;
        }
        else
        {
            start = mid + 1;
        }
    }

    return result;
}

int main()
{
    int arr[] = {1, 2, 2, 2, 3, 4, 5, 6, 7};
    int size = sizeof(arr) / sizeof(arr[0]);
    int key = 2;

    int first_occurrence_index = FirstOccurence(arr, size, key);

    if (first_occurrence_index != -1)
    {
        cout << "First occurrence of " << key << " is at index " << first_occurrence_index << endl;
    }
    else
    {
        cout << "Element " << key << " not found in the array" << endl;
    }
    return 0;
}