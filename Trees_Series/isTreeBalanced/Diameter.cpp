#include <bits/stdc++.h>
using namespace std;

class Node
{

public:
    int data;
    Node *leftNode;
    Node *rightNode;

    Node(int data)
    {
        this->data = data;
        this->leftNode = this->rightNode = NULL;
    }
};

class Tree
{
public:
    // function to find the height of a given tree
    int height(Node *root)
    {
        if (root == NULL)
            return 0;

        int leftHeight = height(root->leftNode);
        int rightHeight = height(root->rightNode);

        return max(leftHeight, rightHeight) + 1;
    }

    // function to find the longest path or diameter of a tree

    int treeDiameter(Node *root)
    {
        if (root == NULL)
            return 0;

        int leftDiameter = treeDiameter(root->leftNode);
        int rightDiameter = treeDiameter(root->rightNode);

        int leftHeight = height(root->leftNode);
        int rightHeight = height(root->rightNode);

        int selfdiameter = leftHeight + rightHeight + 1;

        return max(selfdiameter, max(leftDiameter, rightDiameter));
    }
};
int main()
{
    Node *root = new Node(10);
    root->leftNode = new Node(20);
    root->rightNode = new Node(30);
    root->leftNode->rightNode = new Node(40);
    root->leftNode->rightNode->leftNode = new Node(50);
    Tree t;
    cout << "The height of a tree : " << t.height(root) << endl;
    cout << "The diameter of a tree : " << t.treeDiameter(root) << endl;
    return 0;
}