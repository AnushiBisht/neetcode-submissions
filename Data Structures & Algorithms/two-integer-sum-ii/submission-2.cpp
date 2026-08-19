class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {
        int st = 0;
        int end = nums.size()-1;
        while(st<end){
            int currSum = nums[st]+nums[end];

            if(currSum>target){
                end--;
            }else if(currSum < target){
                st++;
            }else{
                return {st+1,end+1};
            }
        }

        return {};
    }
};
