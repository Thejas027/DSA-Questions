#include <bits/stdc++.h>
using namespace std;

bool palindromeNum(int n)
{
    int orginalNum = n;
    int revno = 0;
    while (n > 0)
    {
        int ld = n % 10;
        n /= 10;
        revno = (revno * 10) + ld;
    }
    return revno == orginalNum;
}

int main()
{
    int n;
    cout << "Enter the numbre : ";
    cin >> n;
    if (palindromeNum(n))
        cout << "Its a palindrome Number" << endl;
    else
        cout << "Its not a palindrome number" << endl;

    return 0;
}