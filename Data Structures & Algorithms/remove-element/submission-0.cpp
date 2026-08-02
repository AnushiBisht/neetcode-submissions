class Solution {
public:
    int removeElement(vector<int>& nums, int val) {
        int n = nums.size();
        int ans = 0;
        for(int i=0;i<n;i++){
            if(nums[i]==val){
                nums[i] = INT_MAX;
            }else{
                ans++;
            }
        }

        sort(nums.begin(),nums.end());

        return ans;

    }
};