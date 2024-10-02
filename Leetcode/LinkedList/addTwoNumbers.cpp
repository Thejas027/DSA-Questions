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