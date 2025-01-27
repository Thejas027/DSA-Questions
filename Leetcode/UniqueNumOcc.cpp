/*

LEET CODE  : UNIQUE NUMBER OF OCCURRENCES (1207)

Given an array of integers arr, return true if the number of occurrences of each value in the array is unique or false otherwise.
 */

class solution
{
public:
      int uniqueNumberOccurrence(vector<int> &arr)
      {
            vector<int> v;
            int n = arr.size();

            sort(arr.begin(), arr.end());
            for (int i = 0; i < n; i++)
            {
                  int count = 1;
                  while (i + 1 < arr.size() && arr[i] == arr[i + 1])
                  {
                        count++;
                        i++;
                  }
                  v.push_back(count);
            }
            sort(v.begin(), v.end());

            for (int i = 1; i < v.size(); i++)
            {
                  if (v[i] == v[i - 1])
                  {
                        return false;
                  }
            }
            return true;
      }
}