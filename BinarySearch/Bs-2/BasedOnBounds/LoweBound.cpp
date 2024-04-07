/*
program to find the lower bound of an given key in a sorted array
lower bound = SMALLEST ELEMENT SUCH THAT  arr[mid] >= key
*/

#include <bits/stdc++.h>
using namespace std;

class BinarySearch
{
public:
    int lowerBound(vector<int> &arr, int key)
    {
        int n = arr.size();
        int start = 0;
        int end = n - 1;
        int result = n;
        while (start <= end)
        {
            int mid = start + (end - start) / 2;

            if (arr[mid] >= key)
            {
                result = mid;
                end = mid - 1;
            }
            else
                start = mid + 1;
        }
        return result;
    }
};

int main()
{
    vector<int> arr = {2, 3, 6, 7, 8, 11, 11, 11, 12};
    int key = 11;
    BinarySearch b;
    cout << "The lower bound of the given key element is at index : " << b.lowerBound(arr, key) << endl;
    return 0;
}