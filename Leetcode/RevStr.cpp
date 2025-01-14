// program to reverse the string
class Solution
{
public:
      void revStr(vector<char> &s)
      {
            int start = 0;
            int end = s.size() - 1;

            while (start < end)
            {
                  swap(s[start], s[end]);
                  start++;
                  end--;
            }
      }
}

// to find the longest common prefix
class Solution
{
public:
      string longestCommonPrefix(vector<string> &strs)
      {
            string ans = "";
            sort(strs.begin(), strs.end());
            int n = strs.size();
            string first = strs[0], last = strs[n - 1];
            for (int i = 0; i < min(first.size(), last.size()); i++)
            {
                  if (first[i] != last[i])
                        return ans;

                  ans += first[i];
            }
            return ans;
      }
};

// to find the third largest number in array
class Solution
{
public:
      int thirdMax(vector<int> &nums)
      {
            long largest = LONG_MIN, secLar = LONG_MIN, thirdLar = LONG_MIN;

            for (int num : nums)
            {
                  // Skip duplicates
                  if (num == largest || num == secLar || num == thirdLar)
                        continue;

                  if (num > largest)
                  {
                        thirdLar = secLar;
                        secLar = largest;
                        largest = num;
                  }
                  else if (num > secLar)
                  {
                        thirdLar = secLar;
                        secLar = num;
                  }
                  else if (num > thirdLar)
                  {
                        thirdLar = num;
                  }
            }

            // If there is no third distinct maximum, return the largest
            return (thirdLar == LONG_MIN) ? largest : thirdLar;
      }
};
