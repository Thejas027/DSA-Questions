// brute force method to delete the node from the nth position

class solution
{
      Node *removeNthNode(Node *head, int N)
      {
            Node *temp = head;
            int count = 0;

            while (temp != nullptr)
            {
                  count++;
                  temp = temp->next;
            }

            if (count == N)
            {
                  Node *newHead = head->next;
                  delete head;
                  return newHead;
            }

            int res = count - N;
            temp = head;
            while (temp != nullptr)
            {
                  res--;
                  if (res == 0)
                        break;
                  temp = temp->next;
            }

            Node *deleteNode = temp->next;
            delete deleteNode;

            temp->next = temp->next->next;
            return head;
      }
}

// optimal approach

class Solution
{
      Node *removeNode(Node *head, int N)
      {
            Node *fast = head;
            for (int i = 0; i < n; i++)
                  fast = fast->next;

            Node *slow = head;

            while (fast->next != nullptr)
            {
                  slow = slow->next;
                  fast = fast->next;
            }

            if (fast == nullptr)
            {
                  Node *newHead = head->next;
                  delete head;
                  return newHead;
            }

            Node *deleteNode = slow->next;
            slow->next = slow->next->next;

            return head;
      }
}