#include <stdio.h>
#include <string>
#include <vector>
using namespace std;

class Solution {
private:
    string component;
    vector<string> path;
    vector<vector<string>> results;
    int pathLen = 0;
    bool isPart(string s){
        int len = s.size();
        if(len == 1) return true;
        int j = len-1;
        for(int i = 0; i < len; i++){
            if(s[i] != s[j]) return false;
            j--;
        }
        return true;
    }
    void backtracking(string s, string component, int start){
        if(pathLen == s.size()){
            results.push_back(path);
            return;
        }
        for(int i = start; i < s.size(); i++){
            string temp = component;
            component.append(s,start,i-start+1);
            pathLen += start-i+1;
            if(isPart(component)){
                path.push_back(component);
                string newComponent;
                backtracking(s, newComponent, i+1);
                path.pop_back();
            }
            component = temp;
            pathLen -= start-i+1;
        }
    }
public:
    vector<vector<string>> partition(string s) {
        backtracking(s, component, 0);
        return results;
    }
};

int main() {
    string s = "aab";
    Solution solution = Solution();
    vector<vector<string>> result;
    result = solution.partition(s);
    system("pause");
    return 0;
}