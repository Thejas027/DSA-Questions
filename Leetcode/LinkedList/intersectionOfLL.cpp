
/*Brute force  using map data strucure it could be done*/

class Solution
{
      Node *intersection(Node *head1, Node *head2)
      {
            map<Node *, int> mp;

            Node *temp = head1;

            while (temp != nullptr)
            {
                  mp[temp] = 1;
                  temp = temp->next;
            }
            temp = head2;
            while (temp != nullptr)
            {
                  if (mp.find(temp) != mp.end())
                        return temp;
                  temp = temp->next;
            }
            return nullptr;
      }
}

/*Optimal way to find the intersection point of given two linked list */

class solution
{
      Node *intersectionOfLL(Node *head1, Node *head2)
      {
            if (head1 != nullptr || head2 != nullptr)
                  return nullptr;

            Node *temp1 = head1;
            Node *temp2 = head2;

            while (temp1 != temp2)
            {
                  temp1 = temp1->next;
                  temp2 = temp2->next;

                  if (temp1 == temp2)
                        return temp1;

                  if (temp1 == nullptr)
                        temp1 = head2;
                  if (temp2 == nullptr)
                        temp2 = head1;
            }
            return temp1;
      }
}