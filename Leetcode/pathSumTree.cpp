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