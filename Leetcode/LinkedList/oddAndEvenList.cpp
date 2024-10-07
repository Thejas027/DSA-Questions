// Brute force approach

class solution
{
      Node *oddEven(Node *head)
      {
            vector<int> &arr;
            Node *temp = head;

            while (temp != nullptr && temp->next != nullptr)
            {
                  if (temp == nullptr || temp->next == nullptr)
                        return head;
                  arr.push(temp->val);
                  temp = temp->next->next;
            }

            if (temp)
                  arr.push(temp->data);

            temp = head->next;
            while (temp != nullptr && temp->next != nullptr)
            {
                  arr.push(temp->data);
                  temp = temp->next->next;
            }
            if (temp)
                  arr.push(temp->data);

            int i = 0;
            temp = head;

            while (temp != nullptr)
            {
                  temp->data = arr[i];
                  i++;
                  temp = temp->next;
            }
            return head;
      }
}

// optimal solution

class Solution
{
      Node *oddToEven(Node *head)
      {
            if (head == nullptr || head->next == nullptr)
                  return head;

            Node *odd = head;
            Node *even = head->next;
            Node *evenHead = head->next;

            while (even != nullptr && even->next != nullptr)
            {

                  if (head == nullptr || head->next == nullptr)
                        return head;

                  odd->next = odd->next->next;
                  even->next = even->next->next;

                  odd = odd->next;
                  even = even->next;
            }

            odd->next = evenHead;
            return head;
      }
}