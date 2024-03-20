/*
PROGRAM TO FIND THE MAX DEPTH OF A TREE IN CPP
*/

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
    int MaxDepth(Node *root);
};

int Node ::MaxDepth(Node *root)
{
    if (root == NULL)
        return 0;

    int leftHeight = MaxDepth(root->leftNode);
    int rightHeight = MaxDepth(root->rightNode);

    return max(leftHeight, rightHeight) + 1;
}

int main()
{
    Node *root = new Node(10);
    root->leftNode = new Node(20);
    root->rightNode = new Node(30);
    root->leftNode->rightNode = new Node(40);
    root->leftNode->rightNode->leftNode = new Node(50);

    cout << "The Max Depth of a Tree : " << root->MaxDepth(root);
    return 0;
}