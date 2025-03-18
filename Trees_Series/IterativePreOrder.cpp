class solution
{
public:
      vector<int> IterativePreOrder(TreeNode *root)
      {
            vector<int> res;
            stack<TreeNode *> st;

            if (!root)
                  return res;

            st.push(root);
            while (!st.empty())
            {
                  TreeNode *node = st.top();
                  st.pop();

                  res.push_back(node->val);

                  if (node->right)
                        st.push(node->right);
                  if (node->left)
                        st.push(node->right);
            }
            return res;
      }
}