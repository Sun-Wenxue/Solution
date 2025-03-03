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
    vector<int> find_val(TreeNode* root, vector<int> result){
        if(root == nullptr) return result;
        result[0]++;
        result[1] = root->val;
        vector<int> result_left = find_val(root->left,result);
        vector<int> result_right = find_val(root->right,result);
        if(result_left[0] >= result_right[0]){
            return result_left;
        }else{
            return result_right;
        }
    }
    int findBottomLeftValue(TreeNode* root) {
        vector<int> result;
        int height = 0;
        result.push_back(height);
        result.push_back(root->val);
        result = find_val(root, result);
        return result[1];
    }
};