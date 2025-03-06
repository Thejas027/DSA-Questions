// Leet code question : To check weather the given string characters have equal occurrence or not
class solution
{
public:
      bool areOccurrenceEqual(string s)
      {
            unordered_set<char, int> freq;
            for (auto it : s)
                  freq[it]++;

            int firstFrq = freq.begin()->second();
            for (auto it : freq)
            {
                  if (it.second != firstFrq)
                        return false;
            }
            return true;
      }
}