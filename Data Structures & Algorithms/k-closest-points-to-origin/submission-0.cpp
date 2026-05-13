class Solution {
public:
    vector<vector<int>> kClosest(vector<vector<int>>& points, int k) {
        priority_queue<pair<int,vector<int>>>mp;
        for(auto &i:points){
            int x=i[0],y=i[1];
            int dist=x*x+y*y;
            mp.push({dist,i});
            if(mp.size()>k) mp.pop();
        }
        vector<vector<int>>ans;
        while(!mp.empty()){
            ans.push_back(mp.top().second);
            mp.pop();
        }
        return ans;
    }
};