// Iterative Post order traversal using 2 stacks
class solution
{
public:
      vector<int> IterativePostOrder(TreeNode *root)
      {
            stack<TreeNode *> st1, st2;
            vector<int> res;

            if (!root)
                  return res;

            st1.push(root);
            while (!st1.empty())
            {
                  TreeNode *node = st1.top();
                  st1.pop();
                  st2.push(node);

                  if (node->left)
                        st1.push(node);
                  if (node->right)
                        st1.push(node);
            }

            while (st2.empty())
            {
                  res.push_back(st2.top()->val);
                  st2.pop();
            }
            return res;
      }
};
