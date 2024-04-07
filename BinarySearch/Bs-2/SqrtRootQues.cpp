/*
program to find the floor square root value of a given number using binary search by answer concepy
*/

#include <bits/stdc++.h>
using namespace std;

class BSearch
{
public:
    int SqrtOfN(int n)
    {
        int start = 0;
        int end = n;
        int ans = 1;
        while (start <= end)
        {
            int mid = start + (end - start) / 2;

            if (mid * mid <= n)
            {
                ans = mid;
                start = mid + 1;
            }
            else
                end = mid - 1;
        }
        return ans;
    }
};

int main()
{

    int n = 28;
    BSearch b;
    cout << "The floor square root value of a given number : " << b.SqrtOfN(n) << endl;
    return 0;
}