class Solution {
public:
    int minEatingSpeed(vector<int>& piles, int h) {
        int l=1;
        int r = INT_MIN;
        for(int pile: piles){
            r = max(r,pile);
        }
        int res = 0;
        while(l<=r){
            int k = l+(r-l)/2;
            long long sum = 0;
            for(int i=0;i<piles.size();i++){
                sum+=ceil((double)piles[i]/k);
            }
            if(sum<=h){
                res = k;
                r = k-1;
            }else{
                l=k+1;
            }
        }

        return res;
    }
};
