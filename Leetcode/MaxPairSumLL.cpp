class solution
{
public:
      int pairSum(ListNode *head)
      {
            vector<int> arr;
            ListNode *cur = head;
            while (cur != nullptr)
            {
                  arr.push_back(cur->val);
                  cur = cur->next;
            }

            int start 0, end = arr.size() - 1, ans 0;
            while (start < end)
                  ans = max(ans, arr[start++] + arr[end--]);

            return ans;
      }
}