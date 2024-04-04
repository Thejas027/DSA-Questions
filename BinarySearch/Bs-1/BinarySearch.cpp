#include <bits/stdc++.h>

// binary search function which returns the index of an element to be searched only if array is sorted in ascending order

int binarySearch(int *arr, int size, int element)
{
    int start = 0;
    int end = size - 1;

    while (start <= end)
    {
        int mid = start + (end - start) / 2;
        // mid = (start + end) / 2 ; is also prefered but above which is the best case to avoid the over flow condition
        if (arr[mid] == element)
            return mid;
        if (element < arr[mid])
            end = mid - 1;
        else
            start = mid + 1;
    }
}

// if array is descending order

int binarySearch2(int *arr, int size, int element)
{
    int start = 0;
    int end = size - 1;

    while (start <= end)
    {
        int mid = start + (end - start) / 2;
        if (arr[mid] == element)
            return mid;
        if (element < arr[mid])
            start = mid + 1; // NOTICE this part the code changes little bit
        else
            end = mid - 1;
    }
}

// if the array sorted is unkown

int binarySearch3(int *arr, int size, int element)
{
    int start = 0;
    int end = size - 1;

    while (start <= end)
    {
        int mid = start + (end - start) / 2;

        if (arr[mid] == element)
            return mid;

        // this loop excutes if the array is sorted in ascending order
        if (arr[0] > arr[1]) // this if statement checks which type of sorted is given
        {
            if (element < arr[mid])
                end = mid - 1;
            else
                start = mid + 1;
        }
        // this loop excutes if the array is sorted in descending order
        else
        {
            if (element < arr[mid])
                start = mid + 1;
            else
                end = mid - 1;
        }
    }
}
int main()
{

    return 0;
}