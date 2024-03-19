#include <bits/stdc++.h>
using namespace std;

void display(vector<int> &arr)
{
    int n = arr.size();
    cout << "The array elements after rearranging : ";
    for (int i = 0; i < n; i++)
    {
        cout << arr[i] << " , ";
    }
}
/*
BRUTE FORCE APPROACH TO REARRANGE THE ARRAY ELEMENTS with
TIME COMPLEXCITY --O(N)
SPACE COMPLEXCITY --oO(N)
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
    // loop to rearrange the array elements

    int posIndex = 0, negIndex = 0;
    for (int i = 0; i < n; i++)
    {
        if (i % 2 == 0 && posIndex < pos.size())
            arr[i] = pos[posIndex++];
        else if (negIndex < neg.size())
            arr[i] = neg[negIndex++];
    }

    display(arr);
}

int main()
{

    vector<int> arr = {-4, -2, 1, 3, 8, -9};
    rearrangeArray(arr);

    return 0;
}