// Problem to find number of subarrays in a given array with xor operations where it should be equal to k

// brute force approach
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