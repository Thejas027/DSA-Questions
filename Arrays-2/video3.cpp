#include <bits/stdc++.h>
using namespace std;

// function that returns the missing element form the array
int missingEle(vector<int> arr, int n)
{
      int sum = (n * (n + 1)) / 2;
      int sum2 = 0;
      for (int i = 0; i < n; i++)
            sum2 += arr[i];
      return (sum - sum2);
}

// another method using xor method

int missingEle2(vector<int> arr, int n)
{
      int xor1 = 0;
      for (int i = 0; i <= n; i++) // Change loop condition to include n
            xor1 ^= i;

      int xor2 = 0;
      for (int num : arr) // for each loop 
            xor2 ^= num;

      return (xor1 ^ xor2);
}

// function that appears only once in a twice array

int numAppearOnce(vector<int> arr)
{
      int n = arr.size();
      int xor1 = 0;
      for (int i = 0; i < n; i++)
            xor1 ^= arr[i];

      return xor1;
}

// function to find the maximum consecutive ones in a array
int maxOnes(vector<int> arr)
{
      int n = arr.size();
      int count = 0;
      int max1 = 0;

      for (int i = 0; i < n; i++)
      {
            if (arr[i] == 1)
            {
                  count++;
                  max1 = max(count, max1);
            }
            else
                  count = 0;
      }
      return max1;
}

int main()
{

      vector<int> arr = {0, 1, 2, 3, 4, 5, 6};
      int n = arr.size();

      // The missing number should be in the range from 0 to n
      cout << "Missing number using sum method: " << missingEle(arr, n) << endl;
      cout << "Missing number using XOR method: " << missingEle2(arr, n) << endl;

      vector<int> arr2 = {1, 1, 2, 2, 3, 4, 4};
      // int n2 = arr2.size();
      cout << "The number that appeared once : " << numAppearOnce(arr2) << endl;

      vector<int> arr3 = {1, 1, 1, 0, 0, 1, 1, 1, 1, 1};
      cout << "The maximum length of consecutive ones in a array : " << maxOnes(arr3) << endl;
      return 0;
}
