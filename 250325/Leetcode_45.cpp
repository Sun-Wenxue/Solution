class Solution {
public:
    int jump(vector<int>& nums) {
        int maxDist = 0, nextDist = 0, times = 0, len = nums.size(), i = 0;
        while(maxDist < len-1){
            nextDist = max(nextDist, i + nums[i]);
            if(i == maxDist){
                times++;
                maxDist = nextDist;
            }
            i++;
        }
        return times;
    }
};