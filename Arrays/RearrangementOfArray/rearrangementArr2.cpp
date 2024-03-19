/*
---VARIETY-2 PROGRAM---
PROGRAM TO REARRANGE THE POSITIVE AND NEGATIVE NUMBER IN A GIVEN ARRAY
*/
#include <bits/stdc++.h>
using namespace std;

void display(vector<int> &arr)
{
    int n = arr.size();
    cout << "The array elements after rearranging : ";
    for (int i = 0; i < n; i++)
    {
        cout << arr[i] << "   ";
    }
}

/*
BRUTE FORCE APPROACH ---(NO BETTER OR OPTIMAL SOULTION FOR THIS PARTICUALR QUESTION)
TIME COMPLEXCITY --O(2*N)
SPACE COMPLEXCITY -- O(N)
*/
void rearrangeArray(vector<int> arr)
{
    int n = arr.size();
    vector<int> pos, neg;

    // loop to seperate the positive and negative array
    for (int i = 0; i < n; i++)
    {
        if (arr[i] >= 0)
            pos.push_back(arr[i]);
        else
            neg.push_back(arr[i]);
    }
    int posSize = pos.size();
    int negSize = neg.size();
    if (posSize > negSize)
    {
        for (int i = 0; i < negSize; i++)
        {
            arr[2 * i] = pos[i];
            arr[2 * i + 1] = neg[i];
        }
        int idx = negSize * 2;
        for (int i = negSize; i < posSize; i++)
        {
            arr[idx] = pos[i];
            idx++;
        }
    }
    else
    {
        for (int i = 0; i < posSize; i++)
        {
            arr[2 * i] = pos[i];
            arr[2 * i + 1] = neg[i];
        }
        int idx = posSize * 2;
        for (int i = posSize; i < negSize; i++)
        {
            arr[idx] = neg[i];
            idx++;
        }
    }
    display(arr);
}

int main()
{

    vector<int> arr = {-4, -2, 1, 3, 8, -9};
    rearrangeArray(arr);

    return 0;
}