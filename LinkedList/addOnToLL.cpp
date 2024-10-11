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

      Node *addOne(Node *head)
      {
            head = reverse(head);

            Node *temp = head;
            int carry = 1;

            while (temp != nullptr)
            {
                  temp->data = temp->data + carry;

                  if (temp->data < 10)
                  {
                        carry = 0;
                        break;
                  }
                  else
                  {
                        temp->data = 0;
                        carry = 1;
                  }
                  temp = temp->data;
            }

            if (carry == 1)
            {
                  Node *newNode = new Node(1);
                  head = reverse(head);

                  newNode->next = head;
                  return newNode;
            }

            head = reverse(head);
            return head;
      }
}