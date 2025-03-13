class Solution {
public:
    bool isValid(string s) {
        stack<char> rightStack;
        for(int i = 0; i < s.size(); i++){
            if(s[i] == '('){
                rightStack.push(')');
            }else if(s[i] == '['){
                rightStack.push(']');
            }else if(s[i] == '{'){
                rightStack.push('}');
            }else{
                if(rightStack.empty()) return false;
                if(s[i] == rightStack.top()){
                    rightStack.pop();
                    continue;
                }else{
                    return false;
                }
            }
        }
        return rightStack.empty();
    }
};