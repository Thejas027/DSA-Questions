/*
      LEET CODE QUESTION  to add the two given liked lists - quesNo. 2
*/

class solution
{
      Node *addTwoNum(Node *l1, Node *l2)
      {
            Node *temp1 = l1;
            Node *temp2 = l2;

            Node *dummyNode = new Node(-1);
            Node *current = dummyNode;
            int carry = 0;

            while (temp1 != nullptr || temp2 != nullptr)
            {
                  int sum = carry;

                  if (temp1)
                        sum += temp1->val;

                  if (temp2)
                        sum += temp2->val;

                  Node *newNode = new Node(sum % 10);
                  carry = sum / 10;

                  current->next = newNode;
                  current = current->next;

                  if (temp1)
                        temp1 = temp1->next;
                  if (temp2)
                        temp2 = temp2->next;
            }

            if (carry)
            {
                  Node *newNode = new Node(carry);
                  current->next = newNode;
            }
            return dummyNode->next;
      }
}

// Leet code question number : 445

class solution
{
public:
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
      Node *addTwoNumbers(Node *l1 Node *l2)
      {
            Node *temp1 = reverse(l1);
            Node *temp2 = reverse(l2);

            Node *dummy = new Node(-1);
            Node *current = dummy;
            int carry = 0;

            while (temp1 != nullptr || temp2 != nullptr || carry > 0)
            {
                  int sum = carry;

                  if (temp1)
                  {
                        sum += temp1->val;
                        temp1 = tem1->next;
                  }
                  if (temp2)
                  {
                        sum += temp2->val;
                        temp2 = temp2->next;
                  }

                  carry = sum / 10;
                  Node *newNode = new Node(sum % 10);

                  current->next = newNode;
                  current = current->next;
            }

            if (carry)
            {
                  Node *newNode = new Node(carry);
                  current->next = newNode;
            }

            return reverse(dummy->next);
      }
}