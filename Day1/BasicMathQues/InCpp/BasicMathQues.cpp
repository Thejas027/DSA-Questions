#include <bits/stdc++.h>
using namespace std;

class Operations
{
public:
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

    // function to find the weather the given number is armstrong number or not
    bool Armstrong(int n)
    {
        int orginalNum = n;
        int DigitsNum = (int)log10(n) + 1;
        int sum = 0;
        while (n > 0)
        {
            int ld = n % 10;
            sum += pow(ld, DigitsNum);
            n /= 10;
        }
        return sum == orginalNum;
    }
};

int main()
{
    int n;
    cout << "Enter the number : ";
    cin >> n;

    Operations op;
    op.ExtractionOfDigit(n);
    cout << "Number of digits: " << op.count(n) << endl;
    cout << "Is palindrome? " << (op.palindromeNum(n) ? "Yes" : "No") << endl;
    cout << "Reversed number: " << op.ReverseNum(n) << endl;
    cout << "Is Armstrong? " << (op.Armstrong(n) ? "Yes" : "No") << endl;
    return 0;
}