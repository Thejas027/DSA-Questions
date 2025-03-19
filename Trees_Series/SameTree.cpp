class solution
{
public:
      bool sameTree(TreeNode *p, TreeNode *q)
      {
            if (p == NULL || q == NULL)
                  return false;
            if (p == NULL && q == NULL)
                  return true;

            if (p->val == q->val)
                  return sameTree(p->left, q->left) && sameTree(p->right, q->right);

            return false;
      }
}