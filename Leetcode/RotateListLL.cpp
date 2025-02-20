class solution
{
public:
      ListNode *rotateRight(ListNode *head, int k)
      {
            if (!head || !head->next)
                  return head;

            int length = 0;
            ListNode *temp = head;
            
            while (temp)
            {
                  temp = temp->next;
                  length++;
            }
            
            int rotation = k % length;

            for (int i = 0; i < rotation; i++)
            {
                  ListNode *last = head;
                  ListNode *prev = NULL;

                  while (last->next != NULL)
                  {
                        prev = last;
                        last = last->next;
                  }

                  last->next = head;
                  prev->next = NULL;

                  head = last;
            }
            return head;
      }
};
