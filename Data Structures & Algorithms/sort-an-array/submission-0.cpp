class Solution {
public:
    vector<int> sortArray(vector<int>& nums) {
        mergeSort(nums,0,nums.size()-1);
        return nums;
    }
private:
    void mergeSort(vector<int>& arr, int st, int end){
        if(st<end){
            int mid = st+ (end-st)/2;

            mergeSort(arr,st, mid); //left
            mergeSort(arr,mid+1, end); //right

            merge(arr,st,mid,end);
        }
    }

    void merge(vector<int>& arr, int st, int mid, int end){
        vector<int>temp;
        int i = st;
        int j = mid+1;

        while(i<=mid && j<=end){
            if(arr[i]<=arr[j]){
                temp.push_back(arr[i++]);
            }else{
                temp.push_back(arr[j++]);
            }
        }

        while(i<=mid) temp.push_back(arr[i++]);
        while(j<=end) temp.push_back(arr[j++]);

        for(int i=0; i<temp.size();i++){
            arr[i+st] = temp[i];
        }
    }
};