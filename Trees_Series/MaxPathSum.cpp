class solution
{
public:
      int maxPathSum(TreeNode *root)
      {
            int maxi = INT_MIN;
            maxPathSum(root, maxi);
            return maxi;
      }

private:
      int maxPathSum(TreeNode *node, int &maxi)
      {

            if (root == NULL)
                  return 0;

            int leftSum = max(0, maxPathSum(root->left, maxi));
            int rightSum = max(0, maxPathSum(root->right, maxi));

            maxi = max(maxi, leftSum + rightSum + node->val);
            return max(leftSum, rightSum) + 1;
      }
}