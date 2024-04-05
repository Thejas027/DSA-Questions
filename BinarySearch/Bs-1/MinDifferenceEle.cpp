#include <bits/stdc++.h>
using namespace std;

class BSearch
{
public:
    int MinDiffEle(int *arr, int size, int key)
    {
        int start = 0;
        int end = size - 1;

        while (start <= end)
        {
            int mid = start + (end - start) / 2;

            if (arr[mid] == key)
                return arr[mid];
            if (arr[mid] < key)
                start = mid + 1;
            else
                end = mid - 1;
        }

        int num1 = abs(arr[start] - key);
        int num2 = abs(arr[end] - key);

        if (num1 > num2)
            return num2;
        return num1;
    }
};

int main()
{
    int arr[] = {1, 4, 5, 6, 7, 10, 15};
    int size = sizeof(arr) / sizeof(arr[0]);
    int key = 8;

    BSearch b;
    cout << "The element which gives the min differece for a key element of  " << key << " is given by  = " << b.MinDiffEle(arr, size, key) << endl;
    return 0;
}