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
int c=0;

    int fun(TreeNode* node){
        int lMax=0, rMax=0;
        if(node == NULL)    return 0;
        if(node->left == nullptr && node->right == nullptr){
            c++;
            return node->val;
        }
        lMax = fun(node->left);
        rMax = fun(node->right);
        if(node-> val >= lMax && node->val >= rMax){
            c++;
            return node->val;
        }
        else{
            return max(lMax, rMax);
        }
    }

    int countDominantNodes(TreeNode* root) {

        // int lMax=0, rMax=0;
        // // if(root == NULL)    return 0;
        // if(root->left == nullptr && root->right == nullptr){
        //     c++;
        //     return root->val;
        // }
        // lMax = countDominantNodes(root->left);
        // rMax = countDominantNodes(root->right);
        // if(root-> val >= lMax && root->val >= rMax){
        //     c++;
        //     return root->val;
        // }
        // else{
        //     return max(lMax, rMax);
        // }
        int max = fun(root);
        return c; 
        
    }
};