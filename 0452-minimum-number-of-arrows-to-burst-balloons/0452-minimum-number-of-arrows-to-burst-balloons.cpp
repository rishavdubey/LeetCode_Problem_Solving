class Solution {
public:
    int findMinArrowShots(vector<vector<int>>& points) {
        sort(points.begin(),points.end());
        vector<vector<int>>v;
        int start=points[0][0];
        int end=points[0][1];
        
        for(int i=1;i<points.size();i++){
            if(points[i][0]<=end){
                end=min(end,points[i][1]);
                // cout<<end<<" ";
            }else{
                
                v.push_back({start,end});
                // cout<<start<<" "<<end;
                start=points[i][0];
                end=points[i][1];
            }
            
        }
        v.push_back({start,end});
        return v.size();
        
    }
};