/**
 * Definition for a binary tree node.
 * struct TreeNode {
 *     int val;
 *     TreeNode *left;
 *     TreeNode *right;
 *     TreeNode() : val(0), left(nullptr), right(nullptr) {}
 *     TreeNode(int x) : val(x), left(nullptr), right(nullptr) {}
 *     TreeNode(int x, TreeNode *left, TreeNode *right) : val(x), left(left), right(right) {}
 * };
 */
class Solution {
public:
        void f(TreeNode* root,int level, int val, int depth){

    if(level==depth-1){
        TreeNode* temp=root->left;
        root->left=new TreeNode(val);
        root->left->left=temp;
        
        temp=root->right;
        root->right=new TreeNode(val);
        root->right->right=temp;
        
        return ;
        
    }
    if(root->left)
        f(root->left,level+1,val,depth);
    
    if(root->right)
        f(root->right,level+1,val,depth);
}
TreeNode* addOneRow(TreeNode* root, int val, int depth) {
    if(1>depth-1){
        TreeNode* temp=new TreeNode(val);
        temp->left=root;
        root=temp;
        return root;
    }
    f(root,1,val,depth);
    return root;

    }
};