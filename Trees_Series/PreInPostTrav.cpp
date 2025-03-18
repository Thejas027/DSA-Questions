//  with the single traversal generate pre,in,post orders
class solution
{
public:
      void preInPostTraversal(TreeNode *root)
      {
            stack<pair<TreeNode *, int>> st;
            vector<int> pre, in, post;
            if (!root)
                  return;

            st.push({root, 1});

            while (!st.empty())
            {
                  auto it = st.top();
                  st.pop();

                  if (it.second == 1)
                  {
                        pre.push_back(it.first->val);
                        it.second++;
                        st.push(it);

                        if (it.first->left)
                              st.push({it.first->left, 1});
                  }
                  else if (it.second == 2)
                  {
                        in.push_back(it.first->val);
                        it.second++;
                        st.push(it);

                        if (it.first->right)
                              st.push({it.first->right, 1});
                  }
                  else
                        post.push_back(it.first->val);
            }
      }
}