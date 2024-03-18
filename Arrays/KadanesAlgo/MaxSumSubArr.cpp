#include <bits/stdc++.h>
using namespace std;

class SubArray
{
public:
    /*
    BRUTE FORCE APPROACH with
    TIME COMPLEXCITY -- O(N*N*N)
    SPACE COMPLEX --O(1)
    */
    int maxVal1(vector<int> arr)
    {
        int n = arr.size();
        int maxi = INT_MIN;
        for (int i = 0; i < n; i++)
        {
            for (int j = i; j < n; j++)
            {
                int sum = 0;
                for (int k = i; k <= j; k++)
                {
                    sum += arr[k];
                    maxi = max(sum, maxi);
                }
            }
        }
        return maxi;
    }

    /*
    BETTER SOLUTION TO FIND THE MAX SUM with
    TIME COMPLEX -- O(N*N)
    SPACE COMPLEX -- O(1)
    */
    int maxVal2(vector<int> arr);

    /*
    OPTIMAL SOLUTION TO FIND THE MAX SUm using KADANE's algo  with
    TIME COMPLEX -- O(N)
    SPACE COMPLEX -- O(1)
    */
    int maxVal3(vector<int> arr)
    {
        int n = arr.size();
        int maxSum = INT_MIN;
        int currentSum = 0;
        for (int i = 0; i < n; i++)
        {
            currentSum += arr[i];
            if (currentSum < 0)
            {
                currentSum = 0;
            }
            maxSum = max(maxSum, currentSum);
        }
        return maxSum;
    }
};

int SubArray ::maxVal2(vector<int> arr)
{
    int n = arr.size();
    int maxi = INT_MIN;
    for (int i = 0; i < n; i++)
    {
        int sum = 0;
        for (int j = i; j < n; j++)
        {
            sum += arr[j];
            maxi = max(sum, maxi);
        }
    }
    return maxi;
}

int main()
{
    vector<int> arr = {-2, -3, 4, -1, -2, 1, 5, -3};
    SubArray s;
    cout << "The max sum of a sub array : " << s.maxVal3(arr);
}