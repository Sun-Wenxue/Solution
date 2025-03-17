class Solution {
public:
    int evalRPN(vector<string>& tokens) {
        // string和""末尾有'/0'，char没有
        //.c_str()将string变成char风格
        stack<int> numbers;
        for(int i = 0; i < tokens.size(); i++){
            if(tokens[i]!="+" && tokens[i]!="-" && tokens[i]!="*" && tokens[i]!="/"){
                numbers.push(atoi(tokens[i].c_str()));
            }else{
                int elem1 = numbers.top();
                numbers.pop();
                int elem2 = numbers.top();
                numbers.pop();
                if(tokens[i][0] == '+') elem1 = elem2 + elem1;
                else if(tokens[i][0] == '-') elem1 = elem2 - elem1;
                else if(tokens[i][0] == '*') elem1 = elem2 * elem1;
                else if(tokens[i][0] == '/') elem1 = elem2 / elem1;
                numbers.push(elem1);
            }
        }
        return numbers.top();
    }
};