class Solution {
private:
    vector<vector<int>> results;
    vector<int> path;
    int sum = 0;
    void backtracking(vector<int>& candidates, int target, int start, bool flag[]){
        if(sum == target){
            results.push_back(path);
            return;
        }
        for(int i = start; i < candidates.size() && sum + candidates[i] <= target; i++){
            if(i>0 && candidates[i] == candidates[i-1] && flag[i-1] == 0){
                continue;
            }
            // flag[i-1] =0说明当前子树不是以candidates[i-1]为父节点的重复的子树，由于candidates是非严格递增的，所以不会出现i-1的重复子树就代表也不会出现i-2的重复子树。
            path.push_back(candidates[i]);
            sum += candidates[i];
            flag[i] = 1;
            backtracking(candidates, target, i + 1, flag);
            path.pop_back();
            sum -= candidates[i];
            flag[i] = 0;
        }
    }
public:
    vector<vector<int>> combinationSum2(vector<int>& candidates, int target) {
        sort(candidates.begin(),candidates.end());
        bool flag[candidates.size()];
        for(int i = 1; i < candidates.size(); i++){
            flag[i] = 0;
        }
        backtracking(candidates, target, 0, flag);
        return results;
    }
};