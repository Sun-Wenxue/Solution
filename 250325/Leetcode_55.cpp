class Solution {
public:
    bool canJump(vector<int>& nums) {
        int maxDist = 0;
        for(int i = 0; i < nums.size(); i++){
            if(maxDist < i) return false;
            maxDist = max(i+nums[i], maxDist);
        }
        return true;
    }
};