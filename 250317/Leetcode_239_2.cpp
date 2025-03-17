class Solution {
public:
    vector<int> maxSlidingWindow(vector<int>& nums, int k) {
        // 方法二： 双向队列
        deque<int> maxQue;  // 保存候选元素索引
        for(int i = 0; i < k; i++){
            while(!maxQue.empty()&& nums[i]>=nums[maxQue.back()]){
                maxQue.pop_back();  // 删除所有小于【窗口内后续值】的值的索引
            }
            maxQue.push_back(i);
        }

        vector<int> maxVec = {nums[maxQue.front()]};
        for(int i = k; i < nums.size(); i++){
            while(!maxQue.empty()&& nums[i]>=nums[maxQue.back()]){
                maxQue.pop_back();  // 删除所有小于【窗口内后续值】的值的索引
            }
            maxQue.push_back(i);
            // 访问front之前，去除所有滑出窗口的值
            while(maxQue.front() <= i-k){
                maxQue.pop_front();
            }
            maxVec.push_back(nums[maxQue.front()]);
        }
        return maxVec;
    }
};