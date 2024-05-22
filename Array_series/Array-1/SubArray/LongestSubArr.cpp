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

    int subArr2(vector<int> arr, int k)
    {
        int left = 0, right = 0;
        int n = arr.size();
        int maxLen = 0;
        int sum = 0;

        while (right < n)
        {
            sum += arr[right];

            // Shrink the window until the sum is less than or equal to k
            while (left <= right && sum > k)
            {
                sum -= arr[left];
                left++;
            }

            // Check if the current sum equals k
            if (sum == k)
            {
                maxLen = max(maxLen, right - left + 1);
            }

            right++;
        }

        return maxLen;
    }
};

int main()
{

    vector<int> arr = {-13, 0, 6, 15, 16, 2, 15, -12, 17, -16, 0, -3, 19, -3, 2, -9, -6};

    int k;

    SubArray s;
    cout << "Enter the sum value to find the longest sub array : ";
    cin >> k;
    cout << "The longest sub array of given value  " << k << " : " << s.subArr2(arr, k);
    return 0;
}