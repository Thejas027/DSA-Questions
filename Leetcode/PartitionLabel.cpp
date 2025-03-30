
/*You are given a string s. We want to partition the string into as many parts as possible so that each letter appears in at most one part. For example, the string "ababcc" can be partitioned into ["abab", "cc"], but partitions such as ["aba", "bcc"] or ["ab", "ab", "cc"] are invalid.

Note that the partition is done so that after concatenating all the parts in order, the resultant string should be s.

Return a list of integers representing the size of these parts.*/
class solution
{
public:
      vector<int> partitionLabel(string s)
      {
            vector<int> charIdx(26, 0); // to store each charactres last index
            for (int i = 0; i < s.size(); ++i)
                  charIdx[s[i] - 'a'] = i;

            int start 0, end = 0;
            vector<int> res;
            for (int i = 0; i < s.size(); ++i)
            {
                  end = max(end, charIdx[s[i] - 'a']);

                  if (i == end)
                  {
                        res.push_back(i - start + 1);
                        start = i + 1;
                  }
            }
            return res;
      }
}