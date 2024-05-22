#include <bits/stdc++.h>
using namespace std;

// brute force approch to find the intersection of 2 array  O(n1*n2);
int main()
{

    vector<int> a1 = {1, 2, 2, 3, 4, 5, 6, 10};
    vector<int> a2 = {2, 2, 3, 4, 5, 7, 8};

    int n1 = a1.size();
    int n2 = a2.size();
    vector<int> ans = {};
    int visited[n2] = {};

    for (int i = 0; i < n1; i++)
    {
        for (int j = 0; j < n2; j++)
        {
            if (a1[i] == a2[j] && visited[j] == 0)
            {
                ans.push_back(a1[i]);
                visited[j] = 1;
                break;
            }
            if (a2[j] > a1[i])
                break;
        }
    }

    for (auto num : ans)
    {
        cout << num << " ";
    }
}
