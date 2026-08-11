class Solution {
public:
    vector<int> sortArray(vector<int>& nums) {
        quickSort(nums,0,nums.size()-1);
        return nums;
    }
private:
    void quickSort(vector<int>& arr, int st, int end){
        if(st<end){
            int pivIdx = partition(arr,st,end);

            quickSort(arr,st,pivIdx-1); //left half
            quickSort(arr,pivIdx+1,end); //right half
        }
    }

    int partition(vector<int>& arr, int st, int end){
        int idx = st-1;
        int pivot = arr[end];

        for(int j=st;j<end;j++){
            if(arr[j]<=pivot){
                idx++;
                swap(arr[j],arr[idx]);
            }
        }

        idx++;
        swap(arr[end],arr[idx]);
        return idx;
    }
};