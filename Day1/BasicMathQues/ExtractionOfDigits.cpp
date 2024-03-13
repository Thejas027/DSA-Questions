#include <bits/stdc++.h>
using namespace std;

void ExtractionOfDigit(int n)
{
    // to count the number of digits in a given number
    int count = 0;
    while (n > 0)
    {
        int lastDigit = n % 10;
        n /= 10;
        count++;
        cout << "Digits are : " << lastDigit << endl;
    }
    cout << "The number of digits in a given number is : " << count << endl;
}

int main()
{
    int n;
    cout << "Enter the n value : ";
    cin >> n;

    ExtractionOfDigit(n);
    return 0;
}
