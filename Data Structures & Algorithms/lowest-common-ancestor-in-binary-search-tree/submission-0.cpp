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
TreeNode *ans(TreeNode* root, TreeNode* p, TreeNode* q){
    if(root==NULL)return NULL;
  TreeNode* left = ans(root->left,p,q);
TreeNode* right = ans(root->right,p,q);

if(left!=NULL && right!=NULL) return root;

if(root==p || root==q)
    return root;

if(left==NULL)return right;
return left;




}
    TreeNode* lowestCommonAncestor(TreeNode* root, TreeNode* p, TreeNode* q) {
        return ans(root,p,q);
        
    }
};
