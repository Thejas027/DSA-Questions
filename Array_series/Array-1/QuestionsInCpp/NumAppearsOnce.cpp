// program to find which number has appeared once where remaning all other had appeared twice
#include <bits/stdc++.h>
using namespace std;

class NumAppearsOnce
{
public:
    /* BRUTE FORCE APPROACH
        TIME COMPLEX -- O(N*N)
        SPACE COMPLEX --O(1)
    */
    int numOnce(vector<int> &arr)
    {
        int n = arr.size();

        for (int i = 0; i < n; i++)
        {
            int num = arr[i];
            int count = 0;
            for (int j = 0; j < n; j++)
            {
                if (arr[j] == num)
                    count++;
            }
            if (count == 1)
                return num;
        }
        return -1;
    }

    /*
    OPTIMAL SOLUTION WITH MUCH BETTER TC & SC
    TIME COMPLEX -- O(N)
    SPACE COMPLEX -- O(1)
    */
    int numOnce2(vector<int> &arr)
    {
        int xor1 = 0;
        int n = arr.size();
        for (int i = 0; i < n; i++)
            xor1 = xor1 ^ arr[i];

        return xor1;
    }
};

int main()
{
    vector<int> arr = {1, 1, 2, 3, 3, 4, 4};
    NumAppearsOnce num;
    cout << "The number which had appeared once : " << num.numOnce2(arr);
    return 0;
}