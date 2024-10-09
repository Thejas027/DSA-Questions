

Node *deleteAllOccurrence(Node *head, int key)
{
      Node *temp = head;
      while (temp != nullptr)
      {
            if (temp->val == key)
            {
                  if (temp == head)
                        head = head->next;

                  Node *prevNode = temp->prev;
                  Node *nextNode = temp->next;

                  if (nextNode)
                        nextNode->prev = prevNode;
                  if (prevNode)
                        prevNode->next = nextNode;

                  delete temp;
                  temp = nextNode;
            }
            else
                  temp = temp->next;
      }
      return head;
}
