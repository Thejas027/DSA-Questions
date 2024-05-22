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

    /*
    OPTIMAL SOULTION USING MOORE's VOTING ALGORITHM 
    TIME COMPLEXCITY -- O(N)
    SPACE COMPLEXCITY --O(1)
    */

    int majorityEle3(vector<int> v);
};

// declaration of majority function 1 outside the class
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

// declaration of majority function 2 outside the class
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

// declaration of majority function 3 outside the class

int majorityElement ::majorityEle3(vector<int> v)
{
    int n = v.size();
    int count = 0;
    int ele;

    for (int i = 0; i < n; i++)
    {
        if (count == 0)
        {
            count++;
            ele = v[i];
        }
        else if (v[i] == ele)
            count++;
        else
            count--;
    }

    // loop to find how many times the ele has occured in a array
    int count1 = 0;

    for (int i = 0; i < n; i++)
    {
        if (v[i] == ele)
            count1++;
    }
    if (count1 > (n / 2))
        return ele;

    return -1; // majority element not found in the given array
}
int main()
{
    majorityElement mEle;
    vector<int> arr = {1, 4, 22, 22, 22, 22, 22, 5, 6, 22};
    cout << "The majority element in a given array : " << mEle.majorityEle3(arr);
    return 0;
}