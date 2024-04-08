#include <bits/stdc++.h>
using namespace std;

// optimal way to intersect the 2 array
// TIME COMPLEXCITY --> o(n1+n2)
// SPACE COMPLEXCITY -->o(1)

int main()
{
    vector<int> a1 = {1, 2, 2, 3, 4, 5, 6, 10};
    vector<int> a2 = {2, 2, 3, 4, 5, 7, 8};

    int n1 = a1.size();
    int n2 = a2.size();
    vector<int> ans;
    int i = 0;
    int j = 0;
    while (i < n1 && j < n2)
    {
        if (a1[i] < a2[j])
            i++;
        else if (a2[j] < a1[i])
            j++;
        else
        {
            ans.push_back(a1[i]);
            i++;
            j++;
        }
    }
    cout << "Intersection of given array elements : ";
    for (auto num : ans)
    {
        cout << num << " ";
    }

    return 0;
}
