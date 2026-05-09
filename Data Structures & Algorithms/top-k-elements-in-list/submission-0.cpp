typedef pair<int, int> pi;
class Solution {
public:
    vector<int> topKFrequent(vector<int>& nums, int k) {
        unordered_map<int, int> umap;
        for (int num : nums) {
            umap[num]++;
        }
        priority_queue<pi, vector<pi>, greater<pi>> pq;
        for (auto x : umap) {
            pq.push(make_pair(x.second, x.first));
            if (pq.size() > k) {
                pq.pop();
            }
        }
        vector<int> ans;
        while (!pq.empty()) {
            ans.push_back(pq.top().second);
            pq.pop();
        }

        return ans; 
    }
};
