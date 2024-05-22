// program to find the missing number in a given array

#include <bits/stdc++.h>
using namespace std;

class Arrays
{
public:
    /*
    BRUTE FORCE APPROACH TO FIND THE MISSING NUMBER IN A GIVEN ARRAY
    TIME COMPLEX = O(N*N)
    SPACE COMPLE = O(1)
    */
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

    // BETTTER SOLUTION TO FIND THE MISSING NUMBER IN A GIVEN ARRAY using hashing
    int missingNum2(int arr[], int n)
    {
        int hash[n + 1] = {0};

        for (int i = 0; i < n; i++)
        {
            if (arr[i] >= 0 && arr[i] <= n)
                hash[arr[i]] += 1;
        }

        for (int i = 0; i < n; i++)
        {
            if (hash[i] == 0)
                return i;
        }
        return n;
    }

    /*  OPTIMAL SOLUTION TO FIND THE MISSING NUMBER IN A GIVEN ARRAY
    TIME COMPLEX = O(N)
    SPACE COMPLEX = O(1)
    */

    int missingNum3(int arr[], int n)
    {
        int sum = (n * (n + 1)) / 2;
        int sum2 = 0;
        for (int i = 0; i < n; i++)
        {
            sum2 += arr[i];
        }
        return (sum - sum2);
    }

    /*
    ANOTHER OPTIMAL SOLUTION TO FIND THE MISSING NUMBER IN A ARRAY
    [XOR]--METHOD
    TIME COMPLEX -- o(2N)
    */
    int missingNum4(int arr[], int n)
    {
        int xor1 = 0;
        for (int i = 0; i < n; i++)
            xor1 = xor1 ^ i;

        int xor2 = 0;
        for (int i = 0; i < n - 1; i++)
            xor2 = xor2 ^ arr[i];

        return (xor1 ^ xor2);
    }
};

int main()
{
    int arr[] = {0, 1, 2, 3, 4, 6, 7};
    Arrays a;
    cout << "Missing Number : " << a.missingNum4(arr, 8);
    return 0;
}