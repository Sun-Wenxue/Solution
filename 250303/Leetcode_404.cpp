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
    int sum_left(TreeNode* root, int sum){
        if(root == nullptr) return sum;
        if(root->left && root->left->left == nullptr && root->left->right == nullptr) sum += root->left->val;
        else if(root->left) sum = sum_left(root->left,sum);
        if(root->right) sum = sum_left(root->right,sum);
        return sum;
    }
    int sumOfLeftLeaves(TreeNode* root) {
        int sum = 0;
        return sum_left(root,sum);
    }
};