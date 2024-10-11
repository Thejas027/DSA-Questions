class solution
{
      Node *mergeSortedArray(Node *head1, Node *head2)
      {
            Node *t1 = head1;
            Node *t2 = head2;

            Node *dummy = new Node(-1);
            Node *temp = dummy;

            while (t1 != nullptr && t2 != nullptr)
            {
                  if (t1->data < t2->data)
                  {
                        temp->next = t1;
                        temp = t1;
                        t1 = t1->next;
                  }
                  else
                  {
                        temp->next = t2;
                        temp = t2;
                        t2 = t2->next;
                  }
            }
            if (t1)
                  temp->next = t1;
            else
                  temp->next = t2;

            return dummy->next;
      }
}