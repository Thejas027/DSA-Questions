// Leet code : 141

//  Brute force approach using map data structure

class solution
{
public:
      bool loop(Node *head)
      {
            map<Node *, int> mp;
            Node *temp = head;
            while (temp != nullptr)
            {
                  if (mp.find(temp) != mp.end())
                        return true;

                  mp[temp] = 1;
                  temp = temp->next;
            }
            return false;
      }
}

// optimal approach using tortoise and hare method

class Solution
{
      bool loop(Node *head)
      {
            Node *fast = head;
            Node *slow = head;

            while (fast != nullptr && fast->next != nullptr)
            {
                  slow = slow->next;
                  fast = fast->next->next;

                  if (fast == slow)
                        return true;
            }
            return false;
      }
}

// Leet code question :  142

// brute force using map data structure

class sol
{
public:
      Node *detectNode(Node *head)
      {
            if (head == nullptr || head->next == nullptr)
                  return nullptr;

            int pos;
            Node *temp = head;
            map<Node *, int> mp;

            while (temp != nullptr)
            {
                  if (mp.find(temp) != mp.end())
                        return temp;
                  mp[temp] = pos;
                  pos++;
                  temp = temp->next;
            }
            return nullptr;
      }
}

// optimal approach using fast and slow pointer

class SOL
{
public:
      Node *detectLoop(Node *head)
      {
            if (head == nullptr || head->next == nullptr)
                  return nullptr;

            Node *fast = head;
            Node *slow = head;

            while (fast != nullptr && fast->next != nullptr)
            {
                  slow = slow->next;
                  fast = fast->next->next;

                  if (slow == fast)
                  {
                        slow = head;
                        while (slow != fast)
                        {
                              slow = slow->next;
                              fast = fast->next;
                        }
                        return slow;
                  }
            }
            return nullptr;
      }
}