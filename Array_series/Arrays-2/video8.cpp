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
                  sum += arr[j];
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
            if (currentSum > maxSum)
                  maxSum = currentSum;
      }
      return maxSum;
}

int main()

{
      // vector<int> arr = {-2, 1, -3, 4, -1, 2, 1, -5, 4};
      vector<int> arr = {1, 2, 3, 4, 5};
      cout << subArrayMaxSum(arr);
      return 0;
}