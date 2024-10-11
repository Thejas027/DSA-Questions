class solution
{
      Node *sort(Node *head)
      {
            if (head == nullptr || head->next == nullptr)
                  return head;

            Node *temp = head;
            int count0 = 0;
            int count1 = 0;
            int count2 = 0;

            while (temp != nullptr)
            {
                  if (temp->data == 0)
                        count0++;
                  else if (temp->data == 1)
                        count1++;
                  else
                        count2++;
                  temp = temp->next;
            }

            temp = head;
            int i = 0;

            while (temp != nullptr)
            {
                  if (count0)
                  {
                        temp->data = 0;
                        count0--;
                  }
                  else if (count1)
                  {
                        temp->data = 1;
                        count1--;
                  }
                  else
                  {
                        temp->data = 2;
                        count2--;
                  }
                  temp = temp->next;
            }

            return head;
      }
}

// optimal solution

class Solution
{
      Node *sort(Node *head)
      {
            if (head == nullptr || head->next == nullptr)
                  return head;

            Node *temp = head;

            Node *zeroHead = new Node(-1);
            Node *oneHead = new Node(-1);
            Node *twoHead = new Node(-1);
            Node *zero = zeroHead;
            Node *one = oneHead;
            Node *two = twoHead;

            while (temp != nullptr)
            {
                  if (temp->data == 0)
                  {
                        zero->next = temp;
                        zero = temp;
                  }
                  if (temp->data == 1)
                  {
                        one->next = temp;
                        one = temp;
                  }
                  if (temp->data = 2)
                  {
                        two->next = temp;
                        two = temp;
                  }
                  temp = temp->next;
            }

            zeroHead->next = (oneHead->next) ? oneHead->next : twoHead->next;
            oneHead->next = twoHead->next;

            Node *newHead = zeroHead->next;
            delete zeroHead;
            delete oneHead;
            delete twoHead;

            return newHead;
      }
}