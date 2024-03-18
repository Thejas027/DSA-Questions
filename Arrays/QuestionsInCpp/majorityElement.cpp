// PROGRAM TO FIND THE MAJORITY ELEMENT THAT APPEARS MORE THAN (n/2) TIMES IN A GIVEN ARRAY WILL BE RETURNED

#include <bits/stdc++.h>
using namespace std;

class majorityElement
{
public:
    /*
    BRUTE FORCE APPROACH
    TIME COMPLEXCITY -- O(N*N)
    SPACE COMPLEXCITY --O(1)
    */
    int majorityEle(vector<int> v);

    /*
    BETTER SOLUTION USING MAPS with
    TIME COMPLEXCITY --O(N*logN)
    SPACE COMPLEXCITY --O(N)
    */

    int majorityEle2(vector<int> v);
};

int majorityElement ::majorityEle(vector<int> v)
{
    int n = v.size();
    for (int i = 0; i < n; i++)
    {
        int count = 0;
        for (int j = 0; j < n; j++)
        {
            if (v[j] == v[i])
                count++;
        }
        if (count > (n / 2))
            return v[i];
    }
    return -1;
}

int majorityElement ::majorityEle2(vector<int> v)
{
    map<int, int> m;
    int n = v.size();
    for (int i = 0; i < n; i++)
    {
        m[v[i]]++;
    }

    for (auto it : m)
    {
        if (it.second > (n / 2))
            return it.first;
    }
    return -1;
}

int main()
{
    majorityElement mEle;
    vector<int> arr = {1, 4, 2, 2, 2, 2, 2, 5, 6, 2};
    cout << "The majority element in a given array : " << mEle.majorityEle2(arr);
    return 0;
}