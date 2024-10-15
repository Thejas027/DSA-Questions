class Node
{
public:
      string data;
      Node *next;
      Node *prev;
      Node() : data(""), next(nullptr), prev(nullptr) {};
      Node(string x) : data(x), next(nullptr), prev(nullptr) {};
      Node(string x, Node *next, Node *prev) : data(x), next(next), prev(prev) {};
}

class Browser
{
      Node *currentPage;

public:
      Browser(string &homepage)
      {
            currentPage = new Node(homepage);
      }

      void visit(string &url)
      {
            Node *newNode = new Node(url);
            currentPage->next = newNode;
            newNode->prev = currentPage;
            currentPage = newNode;
      }

      string back(int steps)
      {
            while (steps)
            {
                  if (currentPage->prev)
                        currentPage = currentPage->prev;
                  else
                        break;
                  steps--;
            }
            return currentPage->data;
      }

      string forward(int steps)
      {
            while (steps)
            {
                  if (currentPage->next)
                        currentPage = currentPage->next;
                  else
                        break;
                  steps--;
            }
            return currentPage->data;
      }
}