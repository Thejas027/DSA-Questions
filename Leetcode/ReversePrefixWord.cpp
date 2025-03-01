// Reverse the prefix word : Leet code question : 2000

class solution
{
public:
      string revString(string word, char ch)
      {
            int n = word.length();
            int k = 0;
            for (int i = 0; i < n; i++)
            {
                  if (word[i] == ch)
                  {
                        k = i;
                        break;
                  }
            }
            string res = reverse(word, 0, k);
            return res;
      }

private:
      string reverse(string word, int start, int end)
      {
            while (start < end)
            {
                  char temp = word[start];
                  word[start] = word[end];
                  word[end] = temp;
                  start++;
                  end--;
            }
            return word;
      }
}