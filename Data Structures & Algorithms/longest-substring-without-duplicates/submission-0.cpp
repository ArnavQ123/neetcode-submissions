class Solution {
public:
    int lengthOfLongestSubstring(string s) {
        unordered_set<char>g;
        int l=0,m=0;
        for(int right=0;right<s.length();right++){
            while(g.count(s[right])){
                g.erase(s[l]);
                l++;
            }
            g.insert(s[right]);
            m=max(m,right-l+1);
        }
        return m;
    }
};
