class Solution {
public:
    int latestDayToCross(int row, int col, vector<vector<int>>& cells) {
        int N = row + 5, M = col + 5;
        int a[N][M], dx[] = {0,0,1,-1}, dy[] = {1,-1,0,0};
        bool vis[N][M];
        // set date to each cell
        for(int i = 0; i < cells.size(); i++)
            a[cells[i][0]][cells[i][1]] = i+1;
        // binary search
        int l = 0, r = row * col;
        while(l < r){
            int mid = (l+r+1) / 2;
            bool check = false;
            fill_n(vis[0], N*M, false);
            queue<pair<int,int>> q;
            // push the top cells
            for(int i = 1; i <= col; i++)
                if(a[1][i] > mid)
                    q.push({1,i});
            // BFS
            while(!q.empty()){
                auto [x, y] = q.front();
                q.pop();
                if(vis[x][y]) continue;
                vis[x][y] = true;
                // check if a current cell is the bottom
                if(x == row){
                    check = true;
                    break;
                }
                for(int i = 0; i < 4; i++){
                    int xx = x + dx[i], yy = y + dy[i];
                    if(xx > row || xx < 1 || yy < 1 || yy > col || vis[xx][yy] || a[xx][yy] <= mid) continue;
                    q.push({xx,yy});
                }
            }
            if(check) l = mid;
            else r = mid-1;
        }
        return r;
    }
};