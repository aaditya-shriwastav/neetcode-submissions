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
bool ans(TreeNode* root,int targetSum,int currsum){
    if(root==NULL)return false;

    if(root->left==NULL && root->right==NULL){
        if(currsum+root->val==targetSum){
            return true;

        }
    }
        bool left=ans(root->left,targetSum,currsum+root->val);
        if(left)return true;
        bool right=ans(root->right,targetSum,currsum+root->val);
        if(right)return true;

        return left||right;



    }

    bool hasPathSum(TreeNode* root, int targetSum) {
        return ans(root,targetSum,0);


        
    }
};