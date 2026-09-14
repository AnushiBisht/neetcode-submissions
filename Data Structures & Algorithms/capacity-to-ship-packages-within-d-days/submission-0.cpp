class Solution {
public:
    int shipWithinDays(vector<int>& weights, int days) {
        int st = INT_MIN;
        int end = 0;
        for(int weight: weights){
            st = max(st,weight);
            end+=weight;
        }
        int res =end;
        while(st<=end){
            int mid = st+(end-st)/2;
            if(canShip(weights, days, mid)) {
                res = min(res,mid);
                end = mid - 1;
            }else{
                st=mid+1;
            }
        }

        return res;
    }
    bool canShip(const vector<int>&weights,int days,int mid){
        int ships = 1, currCap = mid;
        for(int w:weights){
            if(currCap-w<0){
                ships++;
                if(ships>days){
                    return false;
                }
                currCap = mid;
            }
            currCap -=w;
        }
        return true;
    }
};