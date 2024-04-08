/*
------SEARCH INSET POSITION----------------
a target value m is given , you need to search the index of target value in array
-->if value present in array , then return its index value
--> if value not present in array , then determine index value where it would be inserted in array , mantaining sorted order
    ex : arr[] = 1 2 4 7
        num = 6
        arr[] = 1 2 4 6 7  -- return index 3 to insert 6 in a array

        WHOLE QUESTION  ==   LOWER BOUND PROBLEM (same logic)
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
                result = arr[mid];
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
    vector<int> arr = {1, 2, 4, 7};
    int key = 3;
    BinarySearch b;
    cout << "The lower bound of the given key element is at index : " << b.lowerBound(arr, key) << endl;
    return 0;
}