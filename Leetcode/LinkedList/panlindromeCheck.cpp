// Brute force approach using stack data structure where its TC = O(2n)  and SC = O(n)

class solution
{
      bool palindrome(Node *head)
      {

            if (head == nullptr || head->next == nullptr)
                  return true;

            stack<int> st;
            Node *temp = head;

            while (temp != nullptr)
            {
                  st.push(temp->data);
                  temp = temp->next;
            }

            temp = head;

            while (temp != nullptr)
            {
                  if (temp->data != st.top())
                        return false;

                  temp = temp->next;
                  st.pop();
            }
            return true;
      }
}

// optimal approach where links would be changed  TC = O(n)  and SC = O(1)
/* where tortse and horse algo is used to find the middle of linked list(using fast and slow pointer )*/

class Solution
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

      bool palindrome(Node *head)
      {
            if (head == nullptr || head->next == nullptr)
                  return true;

            Node *fast = head;
            Node *slow = head;

            // this while loop is to find the middle of linked list
            while (fast->next != nullptr && fast->next->next != nullptr)
            {
                  fast = fast->next->next;
                  slow = slow->next;
            }

            Node *newHead = reverse(slow->next);

            Node *first = head;
            Node *second = newHead;

            while (second != nullptr)
            {
                  if (first->data != second->data)
                  {
                        reverse(newHead);
                        return false;
                  }
                  first = first->next;
                  second = second->data;
            }
            reverse(newHead);
            return true;
      }
}