class solution
{
public:
      vector<int> ZiaZagTraversal(TreeNode *root)
      {
            queue<TreeNode *> q;
            vector<int> res;
            q.push(root);
            bool flag = true;

            while (!q.empty())
            {
                  int size = q.size();
                  vector<int> row(size);
                  for (int i = 0; i < size; i++)
                  {
                        TreeNode *node = q.front();
                        q.pop();

                        int index = (flag) ? i : (size - 1 - i);

                        row[index] = node->val;
                        if (node->left)
                              q.push(node->left);
                        if (node->right)
                              q.push(node->right);
                  }
                  flag = !flag;
                  res.push_back(row);
            }
            return res;
      }
};