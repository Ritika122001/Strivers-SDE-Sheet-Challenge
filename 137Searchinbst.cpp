#include <bits/stdc++.h> 
/*
    Following is the Binary Tree node structure:

    class BinaryTreeNode {
    public : 
        T data;
        BinaryTreeNode<T> *left;
        BinaryTreeNod1e<T> *right;

        BinaryTreeNode(T data) {
            this -> data = data;
            left = NULL;
            right = NULL;
        }
    };
*/

bool searchInBST(BinaryTreeNode<int> *root, int x) {
    // Write your code here.
        if(root==NULL)

    {

        return  false;

    }

    if(root->data == x)

    {

        return true;

    }

    else if(root->data < x)

    {

        searchInBST(root->right,x);

    }

    else

    {

        searchInBST(root->left,x);

    }
}