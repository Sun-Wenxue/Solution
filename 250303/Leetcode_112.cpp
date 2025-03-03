//
// Created by ASUS on 25-3-3.
//
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
    bool path_sum(TreeNode* root, int targetSum, int sum){
        if(!root) return false;
        sum += root->val;
        if(root->left == nullptr && root->right == nullptr) return targetSum == sum;
        return path_sum(root->left, targetSum, sum) || path_sum(root->right, targetSum, sum);
    }
    bool hasPathSum(TreeNode* root, int targetSum) {
        int sum = 0;
        return path_sum(root, targetSum, sum);
    }
};