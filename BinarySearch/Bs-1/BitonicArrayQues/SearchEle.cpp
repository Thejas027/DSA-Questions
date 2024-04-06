#include <iostream>
#include <vector>
using namespace std;

// program to search the element for second half [right half] arary [descending order array]
int binarySearch1(const vector<int> &arr, int start, int end, int key)
{
    while (start <= end)
    {
        int mid = start + (end - start) / 2;
        if (arr[mid] == key)
            return mid;
        if (arr[mid] < key)
            end = mid - 1;
        else if (arr[mid] > key)
            start = mid + 1;
    }
    return -1;
}
// binary search to search the element for first half [left half] array  [ascending order array]
int binarySearch2(const vector<int> &arr, int start, int end, int key)
{
    while (start <= end)
    {
        int mid = start + (end - start) / 2;
        if (arr[mid] == key)
            return mid;
        if (arr[mid] < key)
            start = mid + 1;
        else
            end = mid - 1;
    }
    return -1;
}
// Function to find the bitonic point (maximum element in the bitonic array)
int findBitonicPoint(const vector<int> &arr)
{
    int start = 0;
    int end = arr.size() - 1;
    int n = arr.size() - 1;
    while (start <= end)
    {
        int mid = start + (end - start) / 2;

        if (mid > 0 && mid < n)
        {
            if (arr[mid] > arr[mid - 1] && arr[mid] > arr[mid + 1])
                return mid;
            else if (arr[mid - 1] > arr[mid])
                end = mid - 1;
            else
                start = mid + 1;
        }
    }

    return -1; // Bitonic point not found
}

// Function to search for the element in the bitonic array
int searchElementInBitonicArray(const vector<int> &arr, int key)
{
    int bitonicPoint = findBitonicPoint(arr);

    int leftResult = binarySearch2(arr, 0, bitonicPoint, key);
    if (leftResult != -1)
        return leftResult;

    int rightResult = binarySearch1(arr, bitonicPoint, arr.size() - 1, key);
    return rightResult;
}

int main()
{
    vector<int> arr = {2, 4, 5, 10, 6, 1};
    int key = 2;
    cout << "Element at bitonic array index: " << searchElementInBitonicArray(arr, key) << endl;
    return 0;
}
