class Solution {
public:
    void sortColors(vector<int>& nums) {
        vector<int> count(3);
        for(int num: nums){
            count[num]++;
        }

        int index = 0;
        for(int i=0;i<3;i++){
            for(int j=0; j<count[i];j++){
                nums[index++]=i;
            }
        }
    }
};