class solution
{
      int maxProductSubArr(vector<int> &arr)
      {
            int prefix = 1;
            int suffix = 1;
            int maximum = INT_MIN;

            for (int i = 0; i < arr.size(); i++)
            {
                  if (prefix == 0)
                        prefix = 1;

                  if (suffix == 0)
                        suffix = 1;

                  prefix = prefix * arr[i];
                  suffix = suffix * arr[arr.size() - i - 1];
                  maximum = max(maximum, max(suffix, prefix));
            }
            return maximum;
      }
}