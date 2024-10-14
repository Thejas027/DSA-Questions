class solution
{
public:
      Node *sortLL(Node *head)
      {
            Node *temp = head;
            vector<int> arr;
            while (temp != nullptr)
            {
                  arr.push_back(temp->data);
                  temp = temp->next;
            }
            sort(arr.begin(), arr.end());

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