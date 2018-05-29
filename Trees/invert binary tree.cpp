/**
 * Definition for binary tree
 * struct TreeNode {
 *     int val;
 *     TreeNode *left;
 *     TreeNode *right;
 *     TreeNode(int x) : val(x), left(NULL), right(NULL) {}
 * };
 */
TreeNode* Solution::invertTree(TreeNode* root) {
    if(root==NULL)
        return NULL;
    queue<TreeNode *> q;
    q.push(root);
    while(!q.empty()){
        TreeNode * top = q.front();
        q.pop();
        swap(top->left , top->right);
        if(top->left)
            q.push(top->left);
        if(top->right)
            q.push(top->right);
    }
    return root;
}
