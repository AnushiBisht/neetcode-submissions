class Solution {
public:
    void merge(vector<int>& nums1, int m, vector<int>& nums2, int n) {
        vector<int>temp(nums1.begin(),nums1.begin()+m);
        int idx = 0, i = 0, j = 0;
        while(idx < m+n){
            if(j>=n || (i<m && temp[i]<=nums2[j])){
                nums1[idx++]=temp[i++];
            }else{
                nums1[idx++]=nums2[j++];
            }
        }
    }
};