#include <bits/stdc++.h>
using namespace std;

class SubArray
{
public:
    /*
        BRUTER FORCE APPROACH TO FIND THE LONGEST SUB ARRAY SIZE AND TO RETURN IT
        TIME COMPLEX -- O(N*N)
    */
    int subArr(vector<int> arr, int k)
    {
        int n = arr.size();
        int len = 0;
        for (int i = 0; i < n; i++)
        {
            int sum = 0;
            for (int j = i; j < n; j++)
            {
                sum += arr[j];
                if (sum == k)
                    len = max(len, j - i + 1);
            }
        }
        return len;
    }

    /* optimal solution to find the length of sum of lognest sub array
    TIME COMPLEX -- O(2N)
    SPACE COMPLE -- O(1)
    */
    int subArr2(vector<int> arr, int k)
    {
        int n = arr.size();
        int len = 0;
        int right = 0, left = 0;
        long long sum = 0;

        while (right < n)
        {
            sum += arr[right];

            while (left <= right && sum > k)
            {
                sum -= arr[left];
                left++;
            }
            if (sum == k)
                len = max(len, right - left + 1);

            right++;
        }
        return len;
    }
};

int main()
{

    vector<int> arr = {1, 2, 3, 1, 1, 1, 5, 4};

    int k;

    SubArray s;
    cout << "Enter the sum value to find the longest sub array : ";
    cin >> k;
    cout << "The longest sub array of given value  " << k << " : " << s.subArr2(arr, k);
    return 0;
}