class Solution {
public:
    int minEatingSpeed(vector<int>& piles, int h) {
        int low=1;
        int high=*max_element(piles.begin(),piles.end());
        int ans=0;
        while(low<=high){
            int mid=(low+high)/2;
            int t=tk(mid,piles);
            if(t<=h){
                ans=mid;
                high=mid-1;
            }
            else low=mid+1;
        }
        return ans;
    }
    int tk(int mid,vector<int>&piles){
        int s=0;
        for(int i=0;i<piles.size();i++){
            s+=(piles[i]/mid)+((piles[i]%mid)!=0);
        }
        return s;
    }
};
