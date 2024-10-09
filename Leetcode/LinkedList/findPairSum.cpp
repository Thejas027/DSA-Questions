class solution
{
public:
      Node *findTail(Node *head)
      {
            Node *tail = head;
            while (tail != nullptr)
                  tail = tail->next;
            return tail;
      }
      vector<pair<int, int>> findPairs(Node *head, int sum)
      {
            vector<pair<int, int>> ans;
            Node *left = head;
            Node *right = findTail(head);

            while (left->data < right->data)
            {
                  if (left->data + right->data == sum)
                  {
                        ans.push_back({left->data, right->data});
                        left = left->next;
                        right = right->next;
                  }
                  else if (left->data + right->data < sum)
                        left = left->next;
                  else
                        right = right->prev;
            }
            return ans;
      }
}