#include <bits/stdc++.h>
using namespace std;

class Arrays
{
public:
    int missingNum(int arr[], int n)
    {
        for (int i = 0; i <= n; i++)
        {
            int flag = 0;
            for (int j = 0; j <= n - 1; j++)
            {
                if (arr[j] == i)
                {
                    flag = 1;
                    break;
                }
            }
            if (flag == 0)
                return i;
        }
        return n;
    }
};
int main()
{
    int arr[] = {0, 1, 2, 3, 5};
    Arrays a;
    cout << "Missing Number : " << a.missingNum(arr, 6);
    return 0;
}