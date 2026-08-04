class Solution {
public:
    int majorityElement(vector<int>& nums) {
        unordered_map<int,int>mp;
        int ans;
        for(int i=0;i<nums.size();i++){
            mp[nums[i]]++;
        }

        for(auto& [key,value]: mp){
            if(value > nums.size()/2){
                ans = key;
            }
        }
        return ans;
    }
};