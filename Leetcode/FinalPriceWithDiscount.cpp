class Solution
{
public:
    vector<int> finalPrices(vector<int> &prices)
    {
        int n = prices.size();
        vector<int> answer(n);
        stack<int> st;

        for (int i = 0; i < n; i++)
        {
            while (!st.empty() && prices[st.top()] >= prices[i])
            {
                int index = st.top();
                st.pop();
                answer[index] = prices[index] - prices[i];
            }
            st.push(i);
            answer[i] = prices[i];
        }

        return answer;
    }
};