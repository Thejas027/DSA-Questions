//

#include <bits/stdc++.h>
using namespace std;

class Sorting
{
public:
    void sortNum1(vector<int> &arr);
    void sortNum2(vector<int> &arr);
};

/*
BETTER SOLUTION to sort the given array with
TIME COMPLEX -- O(N)
SPACE COMPLEX -- O(1)
 */

void Sorting ::sortNum1(vector<int> &arr)
{
    int c1 = 0, c2 = 0, c3 = 0;
    int n = arr.size();
    for (int i = 0; i < n; i++)
    {
        if (arr[i] == 0)
            c1++;
        else if (arr[i] == 1)
            c2++;
        else
            c3++;
    }
    for (int i = 0; i < c1; i++)
        arr[i] = 0;
    for (int i = c1; i < c1 + c2; i++)
        arr[i] = 1;
    for (int i = c1 + c2; i < n; i++)
        arr[i] = 2;

    // loop to print the array elements
    for (int i = 0; i < n; i++)
    {
        cout << arr[i] << " ";
    }
}
/*
OPTIMAL SOLUTION to sort the given array with
TIME COMPLEX -- O(N)
SPACE COMPLEX -- O(1)
*/
void Sorting ::sortNum2(vector<int> &arr)
{
    int n = arr.size();
    int low = 0;
    int mid = 0;
    int high = n - 1;

    while (mid <= high)
    {
        if (arr[mid] == 0)
        {
            swap(arr[low], arr[mid]);
            low++;
            mid++;
        }
        else if (arr[mid] == 1)
            mid++;
        else
        {
            swap(arr[mid], arr[high]);
            high--;
        }
    }

    // loop to print the array elements after sorting

    for (int k = 0; k < n; k++)
    {
        cout << arr[k] << " ";
    }
}

int main()
{
    Sorting s;
    vector<int> arr = {0, 0, 1, 0, 1, 2, 0, 1, 1, 0, 2, 2, 1, 0};
    cout << "Array Elements after sorting : ";
    s.sortNum2(arr);
}