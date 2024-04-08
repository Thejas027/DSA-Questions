#include <bits/stdc++.h>
using namespace std;

int main()
{

    vector<int> stocks = {7, 1, 3, 5, 6, 4};
    int mini = stocks[0];
    int profit = 0;
    int n = stocks.size();
    for (int i = 0; i < n; i++)
    {
        int cost = stocks[i] - mini;
        profit = max(cost, profit);

        mini = min(stocks[i], mini);
    }

    cout << "The profit : " << profit << endl;
    return 0;
}