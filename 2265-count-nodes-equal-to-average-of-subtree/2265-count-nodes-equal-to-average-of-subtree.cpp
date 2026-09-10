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
    int cnt = 0;

    pair<int,int> post(TreeNode* root){
        pair<int, int> need = {0, 0};
        if(root == nullptr){
            return need;
        }

        pair<int, int> temp1 = post(root->left);
        need.first += temp1.first;
        need.second += temp1.second;

        pair<int, int> temp2 = post(root->right);
        need.first += temp2.first;
        need.second += temp2.second;

        need.first += root->val;
        need.second += 1;

        if((need.first / need.second) == root->val){
            cnt++;
        }
        return need;
    }

    int averageOfSubtree(TreeNode* root) {
        pair<int, int> p = post(root);
        return cnt;
    }
};