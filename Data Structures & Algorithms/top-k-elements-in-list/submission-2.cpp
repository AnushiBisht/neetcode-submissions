class Solution {
public:
    vector<int> topKFrequent(vector<int>& nums, int k) {
        unordered_map<int,int>mp;
        for(int num: nums){
            mp[num]++;
        }

        vector<vector<int>> bucket(nums.size()+1);
        for(auto&[key,value]:mp){
            bucket[value].push_back(key);
        }

        vector<int>ans;
        for(int i=nums.size(); i>0 && ans.size()<k; i--){
            for(int num: bucket[i]){
                ans.push_back(num);
            }
            if(ans.size()==k)break;
        }

        return ans;
    }
};
