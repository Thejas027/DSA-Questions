class solution
{
public:
      TreeNode *SearchInBst(TreeNode *root)
      {
            if (!root)
                  return NULL;
            while (!root && root->val != val)
            {
                  if (root->val >= val)
                        root = root->left;
                  if (root->val < val)
                        root = root->right;
            }
            return root;
      }
}