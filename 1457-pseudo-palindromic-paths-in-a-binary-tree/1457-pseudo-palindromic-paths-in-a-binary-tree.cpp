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
    int ans = 0;
    int count = 0;
    void dfs(TreeNode* root){
        if(!root)
            return;
        //Toggle nth bit. XOR works as toggle
        count ^= 1 << (root->val-1);        
        dfs(root->left);        
        dfs(root->right);
        // If at leaf node, root->left == root->right == nullptr
        // count&(count-1) == 0 when it is power of two ,i.e., only one bit is toggle 1.
        if((root->left == root->right) && ((count&(count-1)) == 0))
            ++ans;
        
        //Remove the toggle as we have checked for that subtree.
        count ^= (1 << (root->val-1));
    }
    int pseudoPalindromicPaths (TreeNode* root) {
        dfs(root);
        return ans;
    }
};