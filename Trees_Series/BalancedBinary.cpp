class solution
{
public:
      bool isTreeBalanced(TreeNode *root)
      {
            return checkBalance(root) != -1;
      }

private:
      int checkBalance(TreeNode *root)
      {
            if (root == NULL)
                  return 0;

            int leftHeigh = checkBalance(root->left);
            if (leftHeigh == -1)
                  return -1;

            int rightHeight = checkBalance(root->right);
            if (rightHeight == -1)
                  return -1;

            if (abs(leftHeigh - rightHeight) > 1)
                  return -1;

            return max(leftHeigh, rightHeight) + 1;
      }
}