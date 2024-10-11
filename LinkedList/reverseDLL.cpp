
// this method can be used to reverse even the single linked list but its time complex = 2O(n)  and space complex = O(n)
class solution
{
      Node *reverse(Node *head)
      {
            stack<int> st;

            Node *temp = head;

            while (temp != nullptr)
            {
                  st.push(temp->val);
                  temp = temp->next;
            }

            temp = head;
            while (temp != nullptr)
            {
                  temp->val = st.top();
                  st.pop();
                  temp = temp->next;
            }
            return head;
      }
}

// optimal approach to reverse the linked list with time complex = O(n) only no space it used
/*
This uses a concept of swapping of two variables

temp = a , a = b , b = temp

*/
class solution2
{
      Node *reverse(Node *head)
      {
            Node *current = head;
            Node *last = nullptr;

            while (current != nullptr)
            {
                  last = current->back;
                  current->back = current->next;
                  current->next = last;
                  current = current->back;
            }
            return head;
      }
}