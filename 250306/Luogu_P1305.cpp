#include<iostream>
using namespace std;
struct TreeNode{
    char left;
    char right;
};
TreeNode chart[130];
void preOrder(char root){
    if(root == '*') return;
    cout<<root;
    preOrder(chart[root].left);
    preOrder(chart[root].right);
}
int main(){
    int n;
    char root, subRoot;
    cin>>n;
    cin>>root;
    cin>>chart[root].left;
    cin>>chart[root].right;
    for(int i = 1; i< n; i++){
        cin>>subRoot;
        cin>>chart[subRoot].left;
        cin>>chart[subRoot].right;
    }
    preOrder(root);
    return 0;
}