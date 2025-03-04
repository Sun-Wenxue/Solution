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
    TreeNode* insert_node(TreeNode* root, int val){
        if(!root){
            root = new TreeNode(val);
            return root;
        }
        if(root->val > val){
            root->left =  insert_node(root->left, val);
        }else{
            root->right =  insert_node(root->right, val);
        }
        return root;
    }
    TreeNode* insert_tree(TreeNode* root, TreeNode* sub_root){
        if(!sub_root) return root;
        if(sub_root->left) root = insert_tree(root,sub_root->left);
        if(sub_root->right) root = insert_tree(root,sub_root->right);
        root = insert_node(root,sub_root->val);
        return root;
    }
    TreeNode* delete_node(TreeNode* root, int key) {
        if(!root) return root;
        if(root->val == key){
            TreeNode* subTree = root;
            if(subTree->left){
                root = subTree->left;
                root = insert_tree(root,subTree->right);
            }else{
                root = subTree->right;
                root = insert_tree(root,subTree->left);
            }
        }else if(root->val > key) root->left = delete_node(root->left, key);
        else root->right = delete_node(root->right, key);
        return root;
    }
    TreeNode* deleteNode(TreeNode* root, int key) {
        root = delete_node(root, key);
        return root;
    }
};