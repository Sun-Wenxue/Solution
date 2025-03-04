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
    vector<int> findMode(TreeNode* root) {
        vector<int> result;
        trans(root);
        int max_cnt = 1;
        int cnt = 0;
        int val = vec[0];
        for(int i = 0; i < vec.size(); i++){
            if(vec[i] == val){
                cnt++;
            }else{
                cnt = 1;
                val = vec[i];
            }
            if(cnt == max_cnt){
                result.push_back(val);
            }else if(cnt > max_cnt){
                max_cnt = cnt;
                if(result.size()>1) result.erase(result.begin(),result.end()-1);
            }
        }
        return result;
    }

};