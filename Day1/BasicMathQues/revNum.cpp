#include <bits/stdc++.h>

using namespace std;

// function to reverse the number
int ReverseNum(int n)
{
    int revno = 0;
    while (n > 0)
    {
        int ld = n % 10;
        n /= 10;
        revno = (revno * 10) + ld;
    }
    return revno;
}

int main()
{
    int n;
    cout << "Enter the number : ";
    cin >> n;

    cout << "Reverse of a given number : " << ReverseNum(n);
    return 0;
}