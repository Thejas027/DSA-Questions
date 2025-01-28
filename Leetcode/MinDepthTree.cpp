/*
LEET CODE : 111 Minimum depth of a give binary tree

Given a binary tree, find its minimum depth.

The minimum depth is the number of nodes along the shortest path from the root node down to the nearest leaf node.

Note: A leaf is a node with no children.

*/

class solution
{
public:
      int minDepth(TreeNode *root)
      {
            if (root == nullptr)
                  return 0;

            int left = minDepth(root->left);
            int right = minDepth(root->right);

            if (root->left == root->right)
                  return 1;

            if (root->left == nullptr)
                  return 1 + right;

            if (root->right == nullptr)
                  return 1 + left;

            return min(left, right) + 1;
      }
}