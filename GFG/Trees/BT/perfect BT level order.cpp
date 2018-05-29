//this is an optimized form
//there might be errors
struct node{
	int data;
	struct node * left;
	struct node * right;
}Node;

void printLevelOrder(Node * root){
	if(root==NULL)
		return;
	//print root data first
	cout<<root->data<<" ";

	//since it is a balanced BT we can skip checking right subtree
	if(root->left!=NULL){
		cout<<root->left->data<<" "<<root->right->data<<" ";
	}

	queue<Node *> q;
	q.push(root->left);
	q.push(root->right);

	while(!q.empty()){
		Node * top = q.front();
		q.pop();
		Node * last = q.front();
		q.pop();
		cout<<top->left->data<<" "<<last->right->data<<" "<<top->right->data<<" "<<last->left->data<<" ";
		if(top->left->left!=NULL){
			q.push(top->left);
			q.push(last->right);
			q.push(top->right);
			q.push(last->left);
		}
	}
}