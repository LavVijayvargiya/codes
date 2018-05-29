/*Please note that it's Function problem i.e.
you need to write your solution in the form of Function(s) only.
Driver Code to call/invoke your function is mentioned above.*/

/* A binary tree Node
struct Node
{
    int data;
    Node* left, * right;
}; */
void leaves(Node *root){
    if(root){
        leaves(root->left);
        if(root->left==NULL && root->right == NULL){
            cout<<root->data<<" ";
        }
        leaves(root->right);
    }
}
void left(Node * root){
    if(root){
        if(root->left){
            cout<<root->data<<" ";
            left(root->left);
        }
        else if(root->right){
            cout<<root->data<<" ";
            left(root->right);
        }
    }
}

void right(Node * root){
    if(root){
        if(root->right){
            right(root->right);
            cout<<root->data<<" ";
        }
        else if(root->left){
            right(root->left);
            cout<<root->data<<" ";
        }
    }
}


void printBoundary(Node *root)
{
    if(root){
        cout<<root->data<<" ";
        left(root->left);
        leaves(root->left);
        leaves(root->right);
        right(root->right);
    }
}