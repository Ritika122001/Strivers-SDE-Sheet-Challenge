#include <bits/stdc++.h> 
/************************************************************

    Following is the TreeNode class structure

    template <typename T>
    class TreeNode {
       public:
        T data;
        TreeNode<T> *left;
        TreeNode<T> *right;

        TreeNode(T data) {
            this->data = data;
            left = NULL;
            right = NULL;
        }
    };

************************************************************/
#include <bits/stdc++.h> 

 

void inorder(TreeNode<int>* root, int& k, int & ans) {

        if (root==NULL) return;

 

        inorder(root->left, k,ans);

 

        // when k is 0, it is the kth smallest

        if (--k == 0){

              ans = root->data;

              return;

        }

 

        inorder(root->right, k,ans);

}



int kthSmallest(TreeNode<int> *root, int k)
{
	//	Write the code here.
           int ans=0;

       inorder(root, k,ans);

       return ans;


}