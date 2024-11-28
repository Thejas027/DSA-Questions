#include <bits/stdc++.h>
using namespace std;

// program where the array must contain equal number of +ve and -ve elements and its rearranged in such a way that one element is +ve and other is -ve

// Optimal solution
void rearrangement1(vector<int> &arr)
{
      int posIdx = 0;
      int negIdx = 1;
      int n = arr.size();
      vector<int> ans(n, 0);
      for (int i = 0; i < n; i++)
      {
            if (arr[i] > 0)
            {
                  ans[posIdx] = arr[i];
                  posIdx += 2;
            }

            else if (arr[i] < 0)
            {
                  ans[negIdx] = arr[i];
                  negIdx += 2;
            }
      }

      for (int ele : ans)
            cout << ele << " ";
}

// brute force solution
void rearrangeEle2(vector<int> &arr)
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

      unsigned int posIndex = 0, negIndex = 0;
      for (int i = 0; i < n; i++)
      {
            if (i % 2 == 0 && posIndex < pos.size())
                  arr[i] = pos[posIndex++];
            else if (negIndex < neg.size())
                  arr[i] = neg[negIndex++];
      }

      // loop to print the elements
      for (auto ele : arr)
            cout << ele << " ";
      cout << endl;
}

int main()
{

      vector<int> arr = {-4, -2, 1, 3, 8, -9};
      rearrangeEle2(arr);
      return 0;
}
