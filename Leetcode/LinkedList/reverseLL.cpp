// Iterative method

class solution
{
      Node *reverse(Node *head)
      {
            if (head == nullptr || head->next == nullptr)
                  return head;

            Node *temp = head;
            Node *prev = nullptr;

            while (temp != nullptr)
            {
                  Node *front = temp->next;
                  temp->next = prev;
                  prev = temp;
                  temp = front;
            }

            return prev;
      }
}

// Recursive method

class Solution
{
      Node *reverseRecursive(Node *head)
      {
            if (head == nullptr || head->next == nullptr)
                  return;

            Node *newNode = reverseRecursive(head->next);
            Node *front = head->next;
            front->next = head;
            head->next = nullptr;

            return newNode;
      }
}