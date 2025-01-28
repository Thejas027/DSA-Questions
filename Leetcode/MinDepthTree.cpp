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