class Solution {
public:
    int getWinner(vector<int>& arr, int k) {
        int curr=arr[0], cnt=0;
        
        for(int i=1;i<arr.size();i++){
            if(arr[i]>curr){
                curr=arr[i];
                cnt=0;
            }
            cnt++;
            if(cnt==k){
                break;
            }
        }
        
        return curr;
        
    }
};