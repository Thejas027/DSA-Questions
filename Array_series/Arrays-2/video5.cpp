#include <bits/stdc++.h>
using namespace std;

class Pair
{
public:
      int first;
      int second;

      Pair(int first, int second)
      {
            this->first = first;
            this->second = second;
      }

      void printPair()
      {
            cout << "(" << first << "," << second << ")" << endl;
      }
};

// brute force apprach to get the sum of given target element from a array
bool arrEleSum(vector<int> arr, int target)
{
      int n = arr.size();
      int j = 0;
      for (int i = j + 1; i < n; i++)
      {
            if (arr[j] + arr[i] == target)
            {
                  return true;
            }
            j++;
      }
      return false;
}

// its a optimal solution, where it returns the index element of a given two target elements where an vector array is not sorted
Pair arrEleSum2(vector<int> arr, int target)
{
      int n = arr.size();
      int right = n - 1;
      int left = 0;
      // sort(arr.begin(), arr.end());
      while (left < right)
      {
            int sum = arr[right] + arr[left];
            if (sum == target)
                  return Pair(left, right);

            else if (sum > target)
                  right--;

            else
                  left++;
      }

      for (auto ele : arr)
            cout << ele << " ";

      return Pair(-1, -1);
}

int main()
{
      vector<int> arr = {1, 5, 9, 2, 8, 4};

      int target;
      cout << "Enter the target element : ";
      cin >> target;

      Pair foundPair = arrEleSum2(arr, target);

      if (foundPair.first != -1 && foundPair.second != -1)
            foundPair.printPair();
      else
            cout << "Pairs not found" << endl;

      return 0;
}