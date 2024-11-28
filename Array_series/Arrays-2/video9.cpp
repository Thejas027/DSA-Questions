#include <bits/stdc++.h>
using namespace std;

//
int stocksBuy(vector<int> stocks)
{
      int n = stocks.size();
      int profit = 0;
      int mini = stocks[0];
      for (int i = 0; i < n; i++)
      {
            int cost = stocks[i] - mini;

            profit = max(profit, cost);

            mini = min(stocks[i], mini);
      }
      return profit;
}

int main()
{

      vector<int> stocks = {0, 1, 5, 2, 9};
      cout << "The profit : " << stocksBuy(stocks);
      return 0;
}