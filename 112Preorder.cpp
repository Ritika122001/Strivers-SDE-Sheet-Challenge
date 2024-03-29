#include <bits/stdc++.h> 
/*
    Following is Binary Tree Node structure:
    class TreeNode
    {
    public:
        int data;
        TreeNode *left, *right;
        TreeNode() : data(0), left(NULL), right(NULL) {}
        TreeNode(int x) : data(x), left(NULL), right(NULL) {}
        TreeNode(int x, TreeNode *left, TreeNode *right) : data(x), left(left), right(right) {}
    };
*/

void pre(TreeNode *root, vector<int> &ans) {
  // Write your code here.
  if (root == NULL)
    return;
     ans.push_back(root->data);
  pre(root->left,ans);
 
  pre(root->right,ans);
}

vector<int> getPreOrderTraversal(TreeNode *root)
{
    // Write your code here.
    vector<int>ans;
     pre(root,ans);
    return ans;
}



