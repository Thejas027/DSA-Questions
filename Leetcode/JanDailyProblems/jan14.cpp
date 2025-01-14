class Solution
{
public:
      vector<int> findThePrefixCommonArray(vector<int> &A, vector<int> &B)
      {
            unordered_set<int> a;
            unordered_set<int> b;
            int n = A.size();
            vector<int> C(n, 0);

            for (int i = 0; i < n; i++)
            {
                  a.insert(A[i]);
                  b.insert(B[i]);

                  int count = 0;

                  for (int element : a)
                  {
                        if (b.count(element))
                              count++;
                  }

                  C[i] = count;
            }
            return C;
      }
};