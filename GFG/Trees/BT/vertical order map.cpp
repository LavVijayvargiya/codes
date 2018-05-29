/*Please note that it's Function problem i.e.
you need to write your solution in the form of Function(s) only.
Driver Code to call/invoke your function is mentioned above.*/

/* A binary tree node has data, pointer to left child
   and a pointer to right child 
struct Node
{
    int data;
    Node* left;
    Node* right;
}; */
/* Should print vertical order such that each vertical line
   is separated by $ */
void util(Node * root , int level , map<int,vector<int>> &m){
    if(root==NULL)
        return;
    m[level].push_back(root->data);
    util(root->left , level-1 , m);
    util(root->right , level+1 , m);
}

void verticalOrder(Node *root)
{
    map<int,vector<int>> m;
    util(root,0,m);
    for(auto it = m.begin() ; it!=m.end(); ++it){
        for(auto it2 = it->second.begin(); it2!=it->second.end() ; ++it2){
            cout<<*it2<<" ";
        }
        cout<<"$";
    }
}