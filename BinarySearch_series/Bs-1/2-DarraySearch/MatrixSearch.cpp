#include <bits/stdc++.h>
using namespace std;

// returns the  element position index value else returns (-1,-1)
pair<int, int> SearchEle(vector<vector<int>> arr, int key)
{
    int n = arr.size();
    int i = 0;
    int j = n - 1;

    while (i >= 0 && i < n && j >= 0 && j < n)
    {
        if (arr[i][j] == key)
            return make_pair(i, j);
        if (arr[i][j] < key)
            i++;
        else
            j--;
    }
    return make_pair(-1, -1);
}

int main()
{
    vector<vector<int>> arr = {{10, 20, 30, 40, 50}, {15, 25, 35, 45, 55}, {27, 29, 37, 48, 58}, {32, 33, 38, 39, 60}};
    int key = 27;
    pair<int, int> result = SearchEle(arr, key);
    if (result.first != -1 && result.second != -1)
        cout << "Element found at index: (" << result.first << ", " << result.second << ")" << endl;
    else
        cout << "Element not found." << endl;
    return 0;
}

// leet code question : 74. Search a 2D Matrix
class solution
{
public:
    bool searchMatrix(vector<vector<int>> &matrix, int target)
    {
        bool found = true;

        for (int i = 0; i < matrix.size(); i++)
        {
            for (int j = 0; j < matrix[0].size(); j++)
            {
                if (matrix[i][j] == target)
                    found = true;

                break;
            }
        }
        return found;
    }
}