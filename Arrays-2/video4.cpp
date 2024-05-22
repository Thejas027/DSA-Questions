#include <bits/stdc++.h>
using namespace std;

// brute force approach to find the longest subarray lenght of an given target
int longestSubArr(vector<int> arr, int target)
{
      int n = arr.size();
      int len = 0; // to store the maximum lenght of array that matches for given target element

      for (int i = 0; i < n; i++)
      {
            int sum = 0;
            for (int j = i; j < n; j++)
            {
                  sum += arr[j];
                  if (sum == target)
                  {
                        len = max(len, j - i + 1);
                  }
            }
      }
      return len;
}

// optimal solution

int longestSubArr2(vector<int> arr, int target)
{
      int i = 0, j = 0;
      int len = 0;
      int n = arr.size();
      int sum = 0;
      while (i < n)
      {
            sum += arr[i];

            while (j < i && sum > target)
            {
                  sum -= arr[j];
                  j++;
            }

            if (sum == target)
                  len = max(len, i - j + 1);
            i++;
      }
      return len;
}

int main()
{

      vector<int> arr = {-13, 0, 6, 15, 16, 2, 15, -12, 17, -16, 0, -3, 19, -3, 2, -9, -6};
      int target;
      cout << "Enter the longest subarray value to find in a given array : ";
      cin >> target;

      cout << longestSubArr2(arr, target) << endl;
      return 0;
}