// To find the diameter of a bst

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

            int selfDia = leftHeight + rightHeight;

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