#include <bits/stdc++.h>
using namespace std;

// brute force approach to find the max sum of subarray in a given array
int subArray(vector<int> arr)
{
      int n = arr.size();
      int maxi = 0;
      for (int i = 0; i < n; i++)
      {
            int sum = 0;
            for (int j = i; j < n; j++)
            {
                  sum = accumulate(arr.begin() + i, arr.begin() + j + 1, 0);
                  maxi = max(maxi, sum);
            }
      }

      return maxi;
}

// optimal solution using kdanes algorithm

int subArrayMaxSum(vector<int> arr)
{
      int n = arr.size();
      int currentSum = 0;
      int maxSum = 0;

      for (int i = 0; i < n; i++)
      {
            currentSum = max(arr[i], currentSum + arr[i]);
            maxSum = max(currentSum, maxSum);
      }
      return maxSum;
}

int main()

{
      vector<int> arr = {1, 2, 3, 4, 5};
      cout << "Brute Force Max Sum: " << subArray(arr) << endl;
      cout << "Kadane's Max Sum: " << subArrayMaxSum(arr) << endl;
      return 0;
}