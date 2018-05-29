/*Please note that it's Function problem i.e.
you need to write your solution in the form of Function(s) only.
Driver Code to call/invoke your function is mentioned above.*/

/* A binary tree node
struct Node
{
    int data;
    Node* left, * right;
}; */
void util(Node *root , int level , map<int, vector<int>> &m){
    if(root==NULL)
        return;
    m[level].push_back(root->data);
    util(root->left , level+1 , m);
    util(root->right , level , m);
}

void diagonalPrint(Node *root)
{
    map<int , vector<int> > m ; 
    util(root , 0 , m);
    for(auto it = m.begin() ; it!=m.end() ; ++it){
        for(auto x = it->second.begin() ; x!=it->second.end();++x){
            cout<<*x<<" ";
        }
    }
}