class solution
{
      Node *deleteMid(Node *head)
      {
            if (head == nullptr || head->next == nullptr)
                  return nullptr;

            Node *slow = head;
            Node *fast = head;

            fast = fast->next->next;

            while (fast != nullptr && fast->next != nullptr)
            {
                  slow = slow->next;
                  fast = fast->next->next;
            }
            Node *deleteNode = slow->next;
            slow->next = slow->next->next;
            delete deleteNode;

            return head;
      }
}