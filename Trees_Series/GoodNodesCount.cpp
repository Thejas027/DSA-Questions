/*
LEET CODE : 1448 - count good nodes in binary tree

Given a binary tree root, a node X in the tree is named good if in the path from root to X there are no nodes with a value greater than X.

Return the number of good nodes in the binary tree.
*/
class solution
{
public:
      int goodOnes(TreeNode *root)
      {
            if (!root)
                  return 0;
            int count = 0;
            int max = INT_MIN;
            dfs(root, max, count);
            return count;
      }

private:
      void dfs(TreeNode *root, int max, int &count)
      {
            if (!root)
                  return;
            if (root->val >= max)
            {
                  max = root->val;
                  count++;
            }
            dfs(root->left, max, count);
            dfs(root->right, max, count);
      }
}