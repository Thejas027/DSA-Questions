// Leet code problem number: 24

class solution
{
public:
      void swapPairs(ListNode *head)
      {
            if (!head || !head->next)
                  return; // Check if the list is empty or has only one node

            ListNode *temp = head->next;
            head->next = swapPairs(temp->next); // Recursively call for the next pair
            head->next = head;

            return temp;
      }
}