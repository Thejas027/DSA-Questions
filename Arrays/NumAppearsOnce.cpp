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
};

int main()
{
    vector<int> arr = {1, 1, 2, 2, 3, 4, 4};
    NumAppearsOnce num;
    cout << "The number which had appeared once : " << num.numOnce(arr);
    return 0;
}