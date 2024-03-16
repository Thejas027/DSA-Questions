#include <bits/stdc++.h>
using namespace std;

int main()
{

    vector<int> arr1 = {1, 1, 2, 2, 3, 4, 5};
    vector<int> arr2 = {2, 2, 3, 4, 4, 5, 5, 6};

    vector<int> Uarr;
    int i = 0, j = 0;
    int n1 = arr1.size();
    int n2 = arr2.size();

    while (i < n1 && j < n2)
    {
        if (arr1[i] < arr2[j])
        {
            if (Uarr.size() == 0 || Uarr.back() != arr1[i])
            {
                Uarr.push_back(arr1[i]);
            }
            i++;
        }
        else
        {
            if (Uarr.size() == 0 || Uarr.back() != arr2[j])
            {
                Uarr.push_back(arr2[j]);
            }
            j++;
        }
    }

    while (i < n1)
    {
        if (Uarr.size() == 0 || Uarr.back() != arr1[i])
            Uarr.push_back(arr1[i]);
        i++;
    }

    while (j < n2)
    {
        if (Uarr.size() == 0 || Uarr.back() != arr2[j])
            Uarr.push_back(arr2[j]);
        j++;
    }

    cout << "Union of the two arrays: ";
    for (auto num : Uarr)
    {
        cout << num << " ";
    }
    return 0;
}