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

/*
Reverse the linked list between the given range

Leet code : 92 (ques no)

*/

class Solution
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

      reverseBetween(Node *head, int left, int right)
      {

            if (head == nullptr || head->next == nullptr)
                  return head;

            int count = 1;
            Node *temp = head;
            Node *preLeft = nullptr;

            while (count < left)
            {
                  preLeft = temp;
                  temp = temp->next;
                  count++;
            }

            Node *leftNode = temp;

            while (count < right)
            {
                  temp = temp->next;
                  count++;
            }

            Node *rightNode = temp;
            Node *postRight = rightNode->next;

            rightNode->next nullptr; //  to remove the next nodes connection so that till here the list gets reversed

            Node *revHead = reverse(leftNode);

            if (preLeft != nullptr)
                  preLeft->next = revHead;
            else
                  head = revHead;

            leftNode->next = postRight; // to rejoin the connection after reversing the list between those given left and right range

            return head;
      }
}