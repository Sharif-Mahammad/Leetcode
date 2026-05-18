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
    int sum=0,i=0;
    vector<vector<int>> ans;
    vector<int>path;
    void bst(TreeNode* root, int target){
        if(root==nullptr)   return;
        
        sum+=root->val;
        path.push_back(root->val);
        if(sum==target && root->left == nullptr && root->right == nullptr){
            ++i;
            ans.push_back(path);
        }

        bst(root->left, target);

        bst(root->right,target);    
        sum-=root->val;
        if(!path.empty()) path.pop_back();
    }

    vector<vector<int>> pathSum(TreeNode* root, int targetSum) {

        bst(root, targetSum);
        return ans;
    }
};