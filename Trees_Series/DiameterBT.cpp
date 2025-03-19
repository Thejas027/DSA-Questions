class solution
{
public:
      int DiameterOfBinaryTree(TreeNode *root)
      {
            if (root == NULL)
                  return 0;
            int leftHeight = height(root->left);
            int rightHeight = height(root->right);

            int leftDia = DiameterOfBinaryTree(root->left);
            int rightDia = DiameterOfBinaryTree(root->right);

            int selfDia = leftHeight + rightHeight + 1;

            return max(selfDia, max(leftHeight, rightHeight));
      }

private:
      int height(TreeNode *root)
      {
            if (root == NULL)
                  return 0;

            int leftHeight = height(root->left);
            int rightHeight = height(root->right);

            return max(leftHeight, rightHeight) + 1;
      }
}