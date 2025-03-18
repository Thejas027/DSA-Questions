class solution
{
public:
      vector<int> IterativeInOrder(TreeNode *root)
      {
            stack<TreeNode *> st;
            TreeNode *node = root;
            vector<int> res;
            while (node || !st.empty())
            {
                  while (node)
                  {
                        st.push(node);
                        node = node->left;
                  }

                  node = st.top();
                  st.pop();
                  res.push_back(node->val);
                  node = node->right;
            }
            return res;
      }
};