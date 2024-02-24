class Solution {
public:
    vector<vector<int>> merge(vector<vector<int>>& intervals) {
        vector<vector<int>>result;
        sort(intervals.begin(),intervals.end());
        int first=intervals[0][0],second=intervals[0][1];
        for(auto &arr:intervals){
            int temp1=arr[0];
            int temp2=arr[1];
            if(temp1>second){
                result.push_back({first,second});
                first=temp1;
                second=max(temp2,second);
            }else{
                second=max(temp2,second);
            }
        }
        
        result.push_back({first,second});
        return result;
        
    }
};