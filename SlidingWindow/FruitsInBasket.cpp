class solution
{
public:
      int maxFruits(vector<int> &arr, int k)
      {
            int maxlen = 0;
            for (int i = 0 i < arr.size(); i++)
            {
                  set<int> st;
                  for (int j = i; j < arr.size(); j++)
                  {
                        st.insert(arr[j]);

                        if (st.size() <= k)
                              maxlen = max(maxlen, j - i + 1);
                        else
                              break;
                  }
            }
            return maxlen;
      }
}