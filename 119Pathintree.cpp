#include <bits/stdc++.h> 
/*   
    template <typename T = int>
	class TreeNode
	{
		public:
		T data;
		TreeNode<T> *left;
		TreeNode<T> *right;

		TreeNode(T data)
		{
			this->data = data;
			left = NULL;
			right = NULL;
		}

		~TreeNode()
		{
			if (left != NULL)
			{
		  		delete left;
			}
			if (right != NULL)
			{
			 	delete right;
			}
		}
	};
*/

void solve(TreeNode<int> *root, int x, vector<int> &ans) {
  if (root == NULL)
    return;

  if (root->data == x)
    { ans.push_back(x);
      return;
}

     ans.push_back(root->data);
	 solve(root->left,x,ans);
	 solve(root->right, x,ans);
	 if(ans.back()!=x)
	 {
		 ans.pop_back();
	 }
}


vector<int> pathInATree(TreeNode<int> *root, int x)
{
    // Write your code here.
    // if(root->data==x) return {root};
	vector<int>ans;
	// ans.push_back(root->data);
    solve(root,x,ans);
	return ans;

}
