class Solution {
public:
    int findContentChildren(vector<int>& g, vector<int>& s) {
        sort(g.begin(),g.end(),greater<int>());
        sort(s.begin(),s.end(),greater<int>());
        int j = 0, result = 0;
        for(int i = 0; i < g.size(); i++){
            if(j >= s.size()) break;
            if(s[j] >= g[i]){
                result++;
                j++;
            }
        }
        return result;
    }
};