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
 *     TreeNode(int x, TreeNode *left, TreeNode *right) : val(x), left(left),
 * right(right) {}
 * };
 */
class Solution {
public:
    TreeNode* max_tree(vector<int>& nums, int left, int right) {
        if (left > right)
            return nullptr;
        int max_index = left;
        for (int i = left; i <= right; i++) {
            if (nums[i] > nums[max_index]) {
                max_index = i;
            }
        }
        TreeNode* root = new TreeNode(nums[max_index]);
        root->left = max_tree(nums, left, max_index - 1);
        root->right = max_tree(nums,max_index+1, right);
        return root;
    }
    TreeNode* constructMaximumBinaryTree(vector<int>& nums) {
        return max_tree(nums, 0, nums.size() - 1);
    }
};