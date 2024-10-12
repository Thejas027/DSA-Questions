/* Brute force approach to find the maximum consecutive ones
 TC = O(n*n);
 SC = O(1)
 */

class solution
{
public:
      int maxConsecutiveOnes(vector<int> &nums, int k)
      {
            int maxlen = 0, len = 0;
            int n = nums.size();
            for (int i = 0; i < n; i++)
            {
                  int zeros = 0;
                  for (int j = i; j < n; j++)
                  {
                        if (nums[j] == 0)
                              zeros++;

                        if (zeros <= k)
                        {
                              len = j - i + 1;
                              maxlen = max(maxlen, len);
                        }
                        else
                              break;
                  }
            }
            return maxlen;
      }
}

// better solution   TC = O(2n)

class Solution
{
public:
      int maxOnes(vector<int> &nums, int k)
      {
            int l = 0, r = 0, maxlen = 0;
            int zeros = 0;

            while (r < nums.size())
            {
                  if (nums[r] == 0)
                        zeros++;

                  while (zeros > k)
                  {
                        if (nums[l] == 0)
                              zeros--;

                        l++;
                  }

                  if (zeros <= k)
                  {
                        len = r - l + 1;
                        maxlen = max(len, maxlen);
                  }
                  r++;
            }
            return maxlen;
      }
}

// optimal solution TC + O(n)

class solution
{
      int maxOnes(vector<int> &arr, int k)
      {
            int l = 0, r = 0, maxlen = 0, len = 0;
            int zeros = 0;
            while (r < arr.size())
            {
                  if (arr[r] == 0)
                        zeros++;

                  if (zeros > k)
                  {
                        if (arr[r] == 0)
                              zeros--;
                        l++;
                  }

                  if (zeros <= k)
                  {
                        len = r - l + 1;
                        maxlen = max(maxlen, len);
                  }
                  r++;
                  }
            return maxlen;
      }
}