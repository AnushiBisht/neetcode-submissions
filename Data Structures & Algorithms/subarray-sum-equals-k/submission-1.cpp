class Solution {
public:
    int subarraySum(vector<int>& nums, int k) {
        unordered_map<int,int>mp;
        mp[0]=1;
        int ans = 0, sum = 0;
        for(int num: nums){
            sum+=num;
            int diff = sum - k;
            ans += mp[diff];
            mp[sum]++;
        }

        return ans;
    }
};