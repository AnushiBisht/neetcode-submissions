class Solution {
public:
    vector<int> majorityElement(vector<int>& nums) {
        unordered_map<int,int>mp;
        vector<int>ans;
        for(int i=0;i<nums.size();i++){
            mp[nums[i]]++;
        }

        for(auto& [key,value]:mp){
            if(value>nums.size()/3){
                ans.push_back(key);
            }
        }

        return ans;
    }
};