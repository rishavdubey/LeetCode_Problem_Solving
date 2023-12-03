class Solution {
public:
    int minTimeToVisitAllPoints(vector<vector<int>>& points) {
        int result=0;
        for(int i=1;i<points.size();i++){
            result += max(abs(points[i-1][0] - points[i][0]),abs(points[i-1][1]-points[i][1]));
            
        }
        return result;
    }
};