class Solution {
private:
    vector<vector<int>> results;
    vector<int> path;
    int sum = 0;
    void backtracking(vector<int>& candidates, int target, int start){
        if(sum == target){
            results.push_back(path);
            return;
        }else if(sum > target){
            return;
        }
        for(int i = start; i < candidates.size(); i++){
            path.push_back(candidates[i]);
            sum += candidates[i];
            backtracking(candidates, target, i);    //只需把i换成i+1即可，即每次递归从i开始，不必backtracking(candidates, target, i);backtracking(candidates, target, i+1);是因为这样i+1以后的情况递归了两次
            path.pop_back();
            sum -= candidates[i];
        }
    }
public:
    vector<vector<int>> combinationSum(vector<int>& candidates, int target) {
        backtracking(candidates, target, 0);
        return results;
    }
};