#include <bits/stdc++.h>
using namespace std;

class Solution {
public:
    int maxJump(vector<int>& stones) {
        vector<int> dp(stones.size(), 0);
        dp[0] = stones[0];
        dp[1] = stones[1];
        int i, n = stones.size();

        for (int i = 2; i < n; i++) {
            dp[i] = max(max(stones[i] - stones[i - 1], dp[i - 1]),
                        max(stones[i] - stones[i - 2], dp[i - 2]));
        }
        return dp[n-1];
    }
};