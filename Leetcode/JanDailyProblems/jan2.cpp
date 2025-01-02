i /*
 You are given a 0-indexed array of strings words and a 2D array of integers queries.

 Each query queries[i] = [li, ri] asks us to find the number of strings present in the range li to ri (both inclusive) of words that start and end with a vowel.

 Return an array ans of size queries.length, where ans[i] is the answer to the ith query.

 Note that the vowel letters are 'a', 'e', 'i', 'o', and 'u'.


  */

    class Solution
{
public:
      vector<int> vowelStrings(vector<string> &words, vector<vector<int>> &queries)
      {
            unordered_set<char> vowels = {'a', 'e', 'i', 'o', 'u'};
            int n = words.size();

            // Step 1: Create a prefix sum array
            vector<int> prefixSum(n + 1, 0);
            for (int i = 0; i < n; ++i)
            {
                  if (vowels.count(words[i][0]) && vowels.count(words[i].back()))
                  {
                        prefixSum[i + 1] = prefixSum[i] + 1;
                  }
                  else
                  {
                        prefixSum[i + 1] = prefixSum[i];
                  }
            }

            // Step 2: Answer each query
            vector<int> result;
            for (const auto &query : queries)
            {
                  int li = query[0], ri = query[1];
                  result.push_back(prefixSum[ri + 1] - prefixSum[li]);
            }

            return result;
      }
};