/*
program to find the maximum sum in a path
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
};

// function to find the max sum of a path (returns the max sum value)

int maxPathDown(Node *root, int &maxi)
{
    if (root == NULL)
        return 0;

    int leftSum = max(0, maxPathDown(root->leftNode, maxi));
    int rightSum = max(0, maxPathDown(root->rightNode, maxi));

    maxi = max(maxi, leftSum + rightSum + root->data);

    return (root->data) + max(leftSum, rightSum);
}

int maxSum(Node *root)
{
    int maxi = INT_MIN;
    maxPathDown(root, maxi);
    return maxi;
}
/*
     -10
 9       20
     15       7
*/
int main()
{
    Node *root = new Node(-10);
    root->leftNode = new Node(9);
    root->rightNode = new Node(20);
    root->leftNode->rightNode = new Node(40);
    root->rightNode->leftNode = new Node(15);
    root->rightNode->rightNode = new Node(7);

    cout << "The max path sum : " << maxSum(root);

    return 0;
}