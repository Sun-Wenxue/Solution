class Solution {
public:
    vector<int> maxSlidingWindow(vector<int>& nums, int k) {
        // 方法一：优先队列
        priority_queue<pair<int,int>> maxQue; // 自动排序的最大值队列
        for(int i = 0; i < k; i++){
            maxQue.emplace(nums[i],i);  // 省去构造pair的步骤
        }
        vector<int> maxVec(1,maxQue.top().first);
        for(int i = k; i < nums.size(); i++){
            maxQue.emplace(nums[i],i);
            while(maxQue.top().second <= i-k){
                maxQue.pop();   // 只需在需要访问top的时候删除已经划出窗口的值
            }
            maxVec.push_back(maxQue.top().first);
        }
        return maxVec;
    }
};