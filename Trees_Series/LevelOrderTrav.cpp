class solution
{
public:
      vector<vector<int>> LevelOrder(TreeNode *root)
      {
            queue<TreeNode *> q;
            vector<vector<int>> res;
            if (root == nullptr)
                  return res;
            q.push(root);

            while (!q.empty())
            {
                  int size = q.size();
                  vector<int> level;

                  for (int i = 0; i < size; i++)
                  {
                        TreeNode *node = q.front();
                        q.pop();
                        if (node->left != nullptr)
                              q.push(node->left);
                        if (node->right != nullptr)
                              q.push(node->right);

                        level.push_back(node->val);
                  }
                  ans.push_back(level);
            }
            return ans;
      }
}