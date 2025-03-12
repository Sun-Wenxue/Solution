class Solution {
public:
    string removeSpace(string s){
        int slow = 0, fast = 0;
        while(fast < s.size()){ //快指针作为停止条件
            if(s[fast] != ' '){
                s[slow] = s[fast];
                slow++;
                fast++;
            }else{
                if(slow == 0){
                    fast++;
                }else{
                    s[slow] = s[fast];
                    slow++;
                    fast++;
                    while(fast < s.size() && s[fast] == ' '){
                        fast++;
                    }
                }
            }
        }
        for(int j = slow-1; j>=0; j--){ // 慢指针作为resize条件
            if(s[j] != ' '){
                s.resize(j + 1);
                break;
            }
        }
        return s;
    }
    string reverseWords(string s) {
        s = removeSpace(s);
        reverse(s.begin(),s.end());
        int start = 0;
        for(int i = 0; i <= s.size(); i++){
            if(s[i] == ' ' || i == s.size()){   // 空格或末尾是一个单词的结束
                reverse(s.begin()+start,s.begin()+i);
                start = i+1;
            }
        }
        return s;
    }
};