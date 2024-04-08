/*
Binary search program to search the element
below program is a menu driven program where element is searched in sorted array -->Array may be sorted in ascending or descending order
1.binary search of an element if array is sorted in ascending order
2.binary search of an element if array is sorted in descending order
3.array sorted is unknown
*/

#include <bits/stdc++.h>
using namespace std;
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
    return -1;
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
    return -1;
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
        if (arr[start] < arr[end]) // this if statement checks which type of sorted is given
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
    return -1;
}

int main()
{
    int choice;
    do
    {
        cout << "Binary Search Menu\n";
        cout << "1. Search in ascending order array\n";
        cout << "2. Search in descending order array\n";
        cout << "3. Search in array with unknown order\n";
        cout << "4. Exit\n";
        cout << "Enter your choice: ";
        cin >> choice;

        switch (choice)
        {
        case 1:
        {
            int arr_asc[] = {1, 2, 3, 4, 5, 6, 7, 8, 9};
            int size_asc = sizeof(arr_asc) / sizeof(arr_asc[0]);
            int element;
            cout << "Enter the element to search: ";
            cin >> element;
            int index = binarySearch(arr_asc, size_asc, element);
            if (index != -1)
                cout << "Element " << element << " found at index " << index << " in ascending order array.\n";
            else
                cout << "Element " << element << " not found in ascending order array.\n";
            break;
        }
        case 2:
        {
            int arr_desc[] = {9, 8, 7, 6, 5, 4, 3, 2, 1};
            int size_desc = sizeof(arr_desc) / sizeof(arr_desc[0]);
            int element;
            cout << "Enter the element to search: ";
            cin >> element;
            int index = binarySearch2(arr_desc, size_desc, element);
            if (index != -1)
                cout << "Element " << element << " found at index " << index << " in descending order array.\n";
            else
                cout << "Element " << element << " not found in descending order array.\n";
            break;
        }
        case 3:
        {
            int arr_unknown[] = {9, 8, 7, 6, 5};
            int size_unknown = sizeof(arr_unknown) / sizeof(arr_unknown[0]);
            int element;
            cout << "Enter the element to search: ";
            cin >> element;
            int index = binarySearch3(arr_unknown, size_unknown, element);
            if (index != -1)
                cout << "Element " << element << " found at index " << index << " in array with unknown order.\n";
            else
                cout << "Element " << element << " not found in array with unknown order.\n";
            break;
        }
        case 4:
            cout << "Exiting...\n";
            break;
        default:
            cout << "Invalid choice. Please enter again.\n";
        }

    } while (choice != 4);

    return 0;
}