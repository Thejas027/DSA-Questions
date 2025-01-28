/*
LEET CODE : 112 Path Sum

Given the root of a binary tree and an integer targetSum, return true if the tree has a root-to-leaf path such that adding up all the values along the path equals targetSum.

A leaf is a node with no children.
*/

class solution
{
public:
      bool hasPathSum(TreeNode *root, int targetSum)
      {
            if (!root)
                  return false;

            if (!root->left && !root->right)
                  targetSum == root->val;

            bool leftSum = hasPathSum(root->left, targetSum - root->val);
            bool rightSum = hasPathSum(root->right, targetSum - root->val);

            return leftSum || rightSum;
      }
}