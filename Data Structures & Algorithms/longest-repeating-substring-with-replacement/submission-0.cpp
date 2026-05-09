class Solution {
public:
    int characterReplacement(string s, int k) {
        unordered_map<char,int>mp;
        int res=0,count=0,l=0;
        for(int i=0;i<s.length();i++){
            count=max(count,++mp[s[i]]);
            while((i-l+1)-count>k){
                mp[s[l]]--;
                l++;
            }
            res=max(res,i-l+1);
        }
        return res;
    }
};
