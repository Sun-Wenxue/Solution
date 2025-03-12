class Solution {
public:
    string reverseStr(string s, int k) {
        for(int i = 0; i < s.size(); i += 2*k){
            if(i+k-1 < s.size()){
                reverse(s.begin()+i,s.begin()+i+k); // 不是i+k-1
            }else{
                reverse(s.begin()+i,s.end());
            }
        }
        return s;
    }
};