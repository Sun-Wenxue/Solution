class Solution {
public:
    class myComp{
    public:
        bool operator()(pair<int,int>& a, pair<int,int>& b){
            return a.second > b.second;
        }
    };
    vector<int> topKFrequent(vector<int>& nums, int k) {
        vector<int> topVec;
        // hash map
        unordered_map<int,int> counter;
        for(int i = 0; i < nums.size(); i++){
            counter[nums[i]]++;
        }
        // heap
        priority_queue<pair<int,int>, vector<pair<int,int>>, myComp> heap;
        for(unordered_map<int,int>::iterator it = counter.begin(); it != counter.end(); it++){
            heap.push(*it);
            while(heap.size()>k) heap.pop();
        }
        // heap to vec
        while(!heap.empty()){
            topVec.push_back(heap.top().first);
            heap.pop();
        }
        return topVec;
    }
};