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
private:
    vector<int> vec;
    void trans(TreeNode* root){
        if(!root) return;
        trans(root->left);
        vec.push_back(root->val);
        trans(root->right);
        return;
    }
public:
    int getMinimumDifference(TreeNode* root) {
        trans(root);
        if(vec.size()<2) return 0;
        int diff = INT_MAX;
        for(int i = 1; i < vec.size(); i++){
            if(diff > abs(vec[i] - vec[i-1])) diff = abs(vec[i] - vec[i-1]);
        }
        return diff;
    }
};