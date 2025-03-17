class Solution {
public:
    string removeDuplicates(string s) {
        // string自己有栈接口
        string stringStack;
        for(int i = 0 ; i < s.size() ; i++){
            if(stringStack.empty()){
                stringStack.push_back(s[i]);
            }else{
                if(stringStack.back() == s[i]){
                    stringStack.pop_back();
                }else{
                    stringStack.push_back(s[i]);
                }
            }
        }
        return stringStack;
    }
};