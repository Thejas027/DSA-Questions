#include <bits/stdc++.h>
using namespace std;
class Recurssions
{
public:
    // function to find the sum of n natural number by possing the parameter
    void SumOfN(int n, int sum)
    {
        if (n < 1)
        {
            cout << sum;
            return;
        }
        SumOfN(n - 1, sum + n);
    }

    //  best method to find the sum of n natural number

    int SumOfN2(int n)
    {
        if (n == 0)
        {
            return 0;
        }
        return n + SumOfN2(n - 1);
    }
    //  function to find the factorail of n number
    int factorialOfN(int n)
    {
        if (n == 1)
            return 1;
        return n * factorialOfN(n - 1);
    }

    //  function to reverse the arary using recursssion

    void Reverse(int i, int arr[], int n)
    {
        if (i > (n / 2))
            return;
        swap(arr[i], arr[n - i - 1]);
        Reverse(i + 1, arr, n);
    }

    // funtion to check if a string is a palindrome
    bool isPalindrome(int i, string &str)
    {
        int n = str.size();
        if (i >= (n / 2))
            return true;

        if (str[i] != str[n - i - 1])
            return false;

        return isPalindrome(i + 1, str);
    }

    // function to find the (n)th value of a fib series
    int fib(int n)
    {

        if (n <= 1)
            return n;

        return fib(n - 1) + fib(n - 2);
    }
};

int main()
{
    int n;
    cout << "Enter the n value : ";
    cin >> n;

    cout << "Enter the array elements : ";
    int arr[n];
    for (int i = 0; i < n; i++)
        cin >> arr[i];

    string str;
    cout << "Enter the string value to check the palindrome : ";
    cin >> str;

    Recurssions rec;
    cout << "The sum of first " << n << " natural numbers: " << rec.SumOfN2(n) << endl;
    cout << "The Factorial of " << n << ": " << rec.factorialOfN(n) << endl;
    cout << "The last value of a fib series : " << rec.fib(n) << endl;

    rec.Reverse(0, arr, n);
    cout << "Reversed array: ";
    for (int i = 0; i < n; i++)
        cout << arr[i] << " ";
    cout << endl;

    if (rec.isPalindrome(0, str))
        cout << str << " is a palindrome." << endl;
    else
        cout << str << " is not a palindrome." << endl;

    return 0;
}