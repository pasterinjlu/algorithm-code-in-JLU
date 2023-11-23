#include <bits/stdc++.h>
vector<int> inorderTraversal(TreeNode *root)
{
    vector<int> res;
    stack<TreeNode *> s;
    while (root != nullptr || !s.empty())
    {
        while (root != nullptr)
            s.push(root), root = root->left;
        root = s.top();
        s.pop();
        res.push_back(root->val);
        root = root->right;
    }
    return res;
}
bool isSameTree(TreeNode *p, TreeNode *q)
{
    if (!p && !q)
    {
        return true;
    }
    else if (p == nullptr || q == nullptr)
    {
        return false;
    }
    else if (p->val != q->val)
    {
        return false;
    }
    else
    {
        return isSameTree(p->left, q->left) && isSameTree(p->right, q->right);
    }
    return true;
}
int minDepth(TreeNode* root) {
        if(root==nullptr) return 0;
        if(root->left==nullptr&&root->right==nullptr) return 1;
        return min(1+(root->left!=nullptr?minDepth(root->left):1000000),1+(root->right!=nullptr?minDepth(root->right):1000000));
    }