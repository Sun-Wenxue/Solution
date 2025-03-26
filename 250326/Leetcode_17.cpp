class Solution {
private:
    unordered_map<char, string> phone = {
        {'2', "abc"},
        {'3', "def"},
        {'4', "ghi"},
        {'5', "jkl"},
        {'6', "mno"},
        {'7', "pqrs"},
        {'8', "tuv"},
        {'9', "wxyz"}
    };
    vector<string> results;
    string path;
    void backtracking(string digits, int len, int start){
        if(path.size() == len){
            results.push_back(path);
            return;
        }
        char curNum = digits[start];
        string curString = phone[curNum];
        // for(int i = start; i < len; i++){ // 相当于C^N_N的组合，不需要外层for
        for(int j = 0; j < curString.size(); j++){
            path.push_back(curString[j]);
            backtracking(digits, len, start+1);
            path.pop_back();
        }
        // }
    }
public:
    vector<string> letterCombinations(string digits) {
        int len = digits.size();
        if(len == 0) return results;
        backtracking(digits, len, 0);
        return results;
    }
};