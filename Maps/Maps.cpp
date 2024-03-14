#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n;
    cout << "Enter the n value : ";
    cin >> n;

    int arr[n];
    cout << "Enter the array elements : ";
    for (int i = 0; i < n; i++)
        cin >> arr[i];

    // IMPELMENTATION OF MAP
    map<int, int> m;
    for (int i = 0; i < n; i++)
    {
        m[arr[i]] += 1;
    }

    // // iteretion in map
    // for (auto it : m)
    // {
    //     cout << it.first << "->" << it.second << endl;
    // }

    // to fetch
    int num;
    cout << "Enter the num to find how times reapeated : ";
    cin >> num;
    cout << num << " has repeated : " << m[num];
    return 0;
}