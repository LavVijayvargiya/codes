#include<bits/stdc++.h>
using namespace std;

struct node{
	int data;
	struct node * left;
	struct node * right;
};

struct node *newNode(int data){
	struct node * temp = (struct node *)malloc(sizeof(struct node));
	temp->left = NULL;
	temp->right = NULL;
	temp->data = data;
}

void levelOrder(struct node * root){
	if(root==NULL)
		return;
	queue<struct node *> q;
	q.push(root);
	while(!q.empty()){
		struct node * top = q.front();
		q.pop();
		cout<<top->data<<" ";
		if(top->left)
			q.push(top->left);
		if(top->right)
			q.push(top->right);
	}
}