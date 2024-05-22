#include <bits/stdc++.h>
using namespace std;

void printArray(const vector<int> &arr)
{
      for (const int &num : arr)
            cout << num << " ";
      cout << endl;
}

// function to find the largest element form array
int largestElement(const vector<int> &arr)
{
      return *max_element(arr.begin(), arr.end());
}

// function to find the second largest element from the array
int secLargestEle(const vector<int> &arr)
{
      int largest = largestElement(arr), secLargest = INT_MIN;
      for (const int &num : arr)
      {
            if (num > secLargest && num != largest)
                  secLargest = num;
      }
      return secLargest;
}

// function to remove the duplicate elements in a sorted array and it returns the total number of elements

/*
void removeDuplicates(vector<int> &arr){
      int i = 0;
      for(int j=1;j<arr.size();j++){
            if(arr[j] != arr[i]){
                  arr[i+1] = arr[j];
                  i++;
            }
      }
}

// another method using sets
void rmDup(vector<int> &arr){
      set<int> uq;

      for(auto ele : arr)
            uq.insert(ele);

      for (auto el : uq)
            cout << el << " " << endl;
}

*/

int removeDuplicates(vector<int> &arr)
{
      if (arr.empty())
            return 0;
      auto it = unique(arr.begin(), arr.end());
      arr.resize(distance(arr.begin(), it));
      return arr.size();
}

// fucntion that checks and bools weather the array is sorted or not
bool isSorted(const vector<int> &arr)
{
      return is_sorted(arr.begin(), arr.end());
}

int main()
{
      vector<int> arr = {2, 9, 4, 0, 23, 5, 5};
      printArray(arr);

      cout << "The largest element: " << largestElement(arr) << endl;
      cout << "The second largest element: " << secLargestEle(arr) << endl;

      if (isSorted(arr))
      {
            cout << "Array is sorted." << endl;
      }
      else
      {
            cout << "Array is not sorted." << endl;
      }
      vector<int> arr2 = {1, 1, 2, 2, 2, 2, 3, 3, 3, 4};
      cout << "Array size after removing duplicates: " << removeDuplicates(arr2) << endl;
      printArray(arr2);

      return 0;
}
