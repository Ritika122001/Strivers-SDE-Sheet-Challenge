#include <bits/stdc++.h> 
void solve(stack<int> &stack,int num){

    if ((stack.empty()) || (stack.top())<=(num)){

        stack.push(num);

        return;

    }

    int n=stack.top();

    stack.pop();

    solve(stack,num);

    stack.push(n);

}

 

void sortStack(stack<int> &stack)
{
	// Write your code here
	    if(stack.empty()){

        return;

    }

    int num=stack.top();

    stack.pop();

    

    sortStack(stack);

    solve(stack,num);

 


}