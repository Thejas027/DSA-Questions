// program to find max number of consecutive ones that had appared in a given array

#include <bits/stdc++.h>
using namespace std;
class MaxNumOnes
{
public:
    // optimal code to find the maxmium number of consecutive ones
    int maxOnes(vector<int> arr)
    {
        int n = arr.size();
        int max1 = 0;
        int count = 0;
        for (int i = 0; i < n; i++)
        {
            if (arr[i] == 1)
            {
                count++;
                max1 = max(max1, count);
            }
            else
                count = 0;
        }
        return max1;
    }
};
int main()
{
    vector<int> arr = {1, 1, 0, 0, 1, 1, 1, 1, 1};
    MaxNumOnes m;
    cout << "Max num of 1's in a given array : " << m.maxOnes(arr);
    return 0;
}