#include <bits/stdc++.h>
using namespace std;

void ExtractionOfDigit(int n)
{
    // to count the number of digits in a given number
    // int count = 0;
    while (n > 0)
    {
        int lastDigit = n % 10;
        n /= 10;
        // count++;
        cout << "Digits are : " << lastDigit << endl;
    }
    // cout << "The number of digits in a given number is : " << count << endl;
}

// function to count the number of digits in a given number
int count(int n)
{
    int cnt = ((int)log10(n) + 1);
    return cnt;
}

int main()
{
    int n;
    cout << "Enter the n value : ";
    cin >> n;

    ExtractionOfDigit(n);

    cout << "Number of digits : " << count(n);
    return 0;
}
