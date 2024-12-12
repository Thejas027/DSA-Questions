// Problem to find number of subarrays in a given array with xor operations where it should be equal to k

// brute force approach  --> tc = O(n^3)
class solution
{
      int countSubArray(vector<int> arr, int k)
      {
            int count = 0;
            for (int i = 0; i < arr.size(); i++)
            {
                  for (int j = i; j < arr.size(); j++)
                  {
                        int xor = 0;
                        for (int k = i; k < j; k++)
                              xor = xor ^ arr[k];
                        if (xor== k)
                              count++;
                  }
            }
            return count;
      }
}

// better with tc --> O(n^2)

class solution
{
      int countSubArray(vector<int> arr, int k)
      {
            int count = 0;
            for (int i = 0; i < arr.size(); i++)
            {
                  int xor = 0;
                  for (int j = i; j < arr.size(); j++)
                  {
                        xor = xor ^ arr[j];
                        if (xor== k)
                              count++;
                  }
            }
            return count;
      }
}