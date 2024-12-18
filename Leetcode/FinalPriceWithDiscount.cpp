class Solution {
public:
    vector<int> finalPrices(vector<int>& prices) {
        int n = prices.size();
        vector<int> answer(n); // To store the final prices
        stack<int> st; // Monotonic stack to keep track of indices

        for (int i = 0; i < n; i++) {
            // Check for discounts for earlier items
            while (!st.empty() && prices[st.top()] >= prices[i]) {
                int index = st.top();
                st.pop();
                answer[index] = prices[index] - prices[i];
            }
            // Push the current index onto the stack
            st.push(i);
            // Temporarily store the original price in the answer
            answer[i] = prices[i];
        }

        return answer;
    }
};