class Solution {
public:
    int maxSubArray(vector<int>& nums) {
        int preResult = 0, curResult = nums[0], len = nums.size();
        for(int i = 0; i < len; i++){
            preResult = max(nums[i], preResult + nums[i]);
            curResult = max(curResult, preResult);
        }
        return curResult;
    }
};