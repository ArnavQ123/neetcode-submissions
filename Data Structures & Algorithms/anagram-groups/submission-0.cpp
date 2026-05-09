class Solution {
public:
    vector<vector<string>> groupAnagrams(vector<string>& strs) {
        vector<vector<string>> sd;
        unordered_map<string, vector<string>>umap;
        for(auto d: strs){
            string temp=d;
            sort(d.begin(),d.end());
            umap[d].push_back(temp);
        }
        for(auto d:umap){
            sd.push_back(d.second);
        }
        return sd;
    }
};
