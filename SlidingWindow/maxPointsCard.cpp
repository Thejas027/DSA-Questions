class solution
{
public:
      int maxPoints(vector<int> &arr, int k)
      {
            int leftSum = 0, rightSum = 0;
            int maxSum = 0;

            int rightIdx = arr.size() - 1;

            for (int i = 0; i < k; i++)
            {
                  leftSum += arr[i];
                  maxSum = leftSum;
            }

            for (int i = k - 1; i >= 0; i--)
            {
                  leftSum -= arr[i];
                  rightSum += arr[rightIdx];
                  rightIdx = rightIdx - 1;
                  maxSum = max(maxSum, leftSum + rightSum);
            }

            return maxSum;
      }
}
