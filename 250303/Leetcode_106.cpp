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
    TreeNode* buildTree(vector<int>& inorder, vector<int>& postorder) {
        if(postorder.size() == 0) return nullptr;

        int rootVal = postorder.back();
        TreeNode *root = new TreeNode(rootVal);

        if(postorder.size() == 1) return root;
        int i = 0;
        for(i; i < inorder.size(); i++){
            if(inorder[i] == rootVal){
                break;
            }
        }
        vector<int> leftIn(inorder.begin(),inorder.begin() + i), rightIn(inorder.begin() + i + 1,inorder.end());



        vector<int> leftPost(postorder.begin(), postorder.begin() + leftIn.size()), rightPost(postorder.begin() + leftIn.size(), postorder.end() - 1);

        root->left = buildTree(leftIn,leftPost);
        root->right = buildTree(rightIn, rightPost);
        return root;
    }
};