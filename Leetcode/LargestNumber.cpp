class solution
{
public:
      string largestNumber(vector<int> &nums)
      {
            vector<string> res;

            for (int num : nums)
                  res.push_back(to_string(num));

            sort(res.begin(), res.end(), [](const string &a, const string &b)
                 { return a + b > b + a; });
            if (res[0] == "0")
                  return "0"; // Handle case where all numbers are zero
            string largest;
            for (const string &s : res)
                  largest += s;

            return largest;
      }
}