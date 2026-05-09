class Solution {
public:
    bool hasDuplicate(vector<int>& nums) {
        unordered_map<int,int>dp;
        for(auto it: nums){
            dp[it]++;
        }
        for(auto it: dp){
            if(it.second>1) return true;
        }
        return false;
    }
};
