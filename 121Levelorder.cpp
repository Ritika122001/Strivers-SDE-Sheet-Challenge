#include <bits/stdc++.h> 
/************************************************************

    Following is the BinaryTreeNode class structure

    template <typename T>
    class BinaryTreeNode {
       public:
        T val;
        BinaryTreeNode<T> *left;
        BinaryTreeNode<T> *right;

        BinaryTreeNode(T val) {
            this->val = val;
            left = NULL;
            right = NULL;
        }
    };

************************************************************/
vector<int> getLevelOrder(BinaryTreeNode<int> *root)
{
    vector<int> ans;

if(root==NULL) return ans;

queue<BinaryTreeNode<int>*> q;

q.push(root);

while(!q.empty()){

int size=q.size();

for(int i=0; i<size; i++){

BinaryTreeNode<int>* node=q.front();

q.pop();

if(node->left!=NULL) q.push(node->left);

if(node->right!=NULL) q.push(node->right);

 

ans.push_back(node->val);

}

}

return ans;
    //  Write your code here.
}
