/**
 * Definition for a binary tree node.
 * struct TreeNode {
 *     int val;
 *     TreeNode *left;
 *     TreeNode *right;
 *     TreeNode(int x) : val(x), left(NULL), right(NULL) {}
 * };
 */
class Solution {
public:
    bool isUnivalTree(TreeNode* root) {
        if(root->left != NULL){
        	if(!isUnivalTree(root->left))
        		return false;
        	if(root->left->val != root->val)
        		return false;
        }

        if(root->right != NULL){
        	if(!isUnivalTree(root->right))
        		return false;
        	if(root->right->val != root->val)
        		return false;
        }
        return true;
    }
};