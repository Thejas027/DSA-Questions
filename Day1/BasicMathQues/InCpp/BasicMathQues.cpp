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

    // function to find the divisor of a given number  Time complexcity--> O(n)
    void numDivisor(int n)
    {
        for (int i = 1; i <= (n / 2); i++)
        {
            if (n % i == 0)
                cout << i << " ";
        }
    }
    // with use of STL and better time complexcity --> O(sqrt(n) * log(sqrt(n)))
    void numDivisor2(int n)
    {
        vector<int> ls;
        for (int i = 1; i * i <= n; i++)
        {
            if (n % i == 0)
            {
                ls.push_back(i);
                if ((n / i) != i)
                    ls.push_back(n / i);
            }
        }
        sort(ls.begin(), ls.end());
        for (auto it : ls)
            cout << it << " ";
    }

    void primeNum(int n)
    {
        int count = 0;
        for (int i = 1; i * i <= n; i++)
        {
            if (n % i == 0)
            {
                count++;
                if ((n / i) != i)
                    count++;
            }
        }
        if (count == 2)
            cout << n << " is a prime number" << endl;
        else
            cout << n << " is not a prime number" << endl;
    }

    // function to find the GCD || HCF of a given number (Eculidean Algorithm)
    int gcd(int a, int b)
    {
        while (a > 0 && b > 0)
        {
            if (a > b)
                a = a % b;
            else
                b = b % a;
        }
        if (a == 0)
            return b;
        return a;
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
    cout << "The Divisor of a given number : ";
    op.numDivisor2(n);
    cout << endl;
    op.primeNum(n);
    cout << "GCD of Two number : " << op.gcd(52, 10); // chnage accordingly the values of a and b to
                                                      // find the requried number gcd
    return 0;
}