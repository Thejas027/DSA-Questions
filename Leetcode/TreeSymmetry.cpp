/*
LEET CODE : 101 Symmetric Tree

given the root of a binary tree check weather its a mirror if itself
 */

class Solution
{
public:
      bool isSymmetric(TreeNode *root)
      {
            if (root == nullptr)
                  return true;

            return isMirror(root->left, root->right);
      }

private:
      bool isMirror(TreeNode *left, TreeNode *right)
      {
            if (left == nullptr && right == nullptr)
                  return true;

            if (left == nullptr || right == nullptr)
                  return false;

            return (left->val == right->val) && isMirror(left->left, right->right) && isMirror(left->right, right->left);
      }
}