class Solution {
public:
    int wiggleMaxLength(vector<int>& nums) {
        int len = nums.size();
        if(len == 1) return len;
        bool preFlag, curFlag;
        int j = 1;
        while(j < len && nums[j] == nums[0]) j++; // 排除全等序列
        if(j == len) return 1;
        else preFlag = nums[j]>nums[0];
        int result = 2;
        for(int i = j+1; i < len; i++){
            if(nums[i] == nums[i-1]) continue;
            curFlag = nums[i]>nums[i-1];
            if(curFlag != preFlag){
                result++;
                preFlag = curFlag;
            }
        }
        return result;
    }
};