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

void post(TreeNode *root, vector<int> &ans) {
  // Write your code here.
  if (root == NULL)
    return;
    
  post(root->left,ans);
 
  post(root->right,ans);
   ans.push_back(root->data);
}

vector<int> getPostOrderTraversal(TreeNode *root)
{
    // Write your code here.
     vector<int>ans;
     post(root,ans);
    return ans;

}


