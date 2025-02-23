// To construct a tree from a given preorder and postorder traversal

class solution
{
public:
      TreeNode *BinaryTree(vector<int> &preorder, vector<int> &postorder)
      {
            int preIdx = 0;
            int postIdx = 0;
            return constructTree(preIdx, postIdx, preorder, postorder);
      }

private:
      TreeNode *constructTree(int &preIdx, int &postIdx, vector<int> &preorder, vector<int> &postorder)
      {
            TreeNode *root = new TreeNode(preorder[preIdx++]);

            if (root->val != postorder[postIdx])
            {
                  root->left = constructTree(preIdx, postIdx, preorder, postorder)''
            }

            if (root->val != postorder[postIdx])
            {
                  root->right = constructTree(preIdx, postIdx, preorder, postorder);
            }

            postIdx++;
            return root;
      }
}