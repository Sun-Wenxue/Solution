#include<iostream>
#include<cstring>
using namespace std;

void preOrder(string midOrder, string postOrder){
    if(postOrder.size() == 0) return;
    char root = postOrder[postOrder.size()-1];
    cout<<root;
    int k = midOrder.find(root);
    preOrder(midOrder.substr(0,k),postOrder.substr(0,k));
    preOrder(midOrder.substr(k+1),postOrder.substr(k,postOrder.size()-k-1)); //substr第二个参数的意思是子数组的长度，与matlab不同
}
int main(){
    string midOrder;
    string postOrder;
    cin>>midOrder;
    cin>>postOrder;
    preOrder(midOrder, postOrder);
    return 0;
}