class Solution {
private:
    vector<vector<int>> result;
    vector<int> path;
    int sum = 0;
    void backtracking(int n, int k, int start){
        if(sum == n && path.size() == k){
            result.push_back(path);
            return;
        }else if(path.size() == k){
            return;
        }
        for(int i = start; i <= 9; i++){
            path.push_back(i);
            sum += i;
            backtracking(n, k, i+1);
            path.pop_back();
            sum -= i;
        }
    }
public:
    vector<vector<int>> combinationSum3(int k, int n) {
        backtracking(n,k,1);
        return result;
    }
};