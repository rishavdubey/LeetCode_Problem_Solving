class Solution {
public:
int mod = pow( 10 , 9 ) + 7 ;
    int m , n ;
    vector<vector<int>>dp ;
    
    int dfs( int i , int j , vector<vector<int>>&grid , int prev )
    {
        if( i < 0 or j < 0 or i >= m or j >= n ) return 0 ;
        
        if( grid[i][j] <= prev ) return 0 ;
        
        if( dp[i][j] != -1 ) return dp[i][j] ;
        
        int ans = 0 ;
        
        ans = ( ans + 1 )%mod ;
        
        ans  = ( ans + dfs( i + 1 , j , grid , grid[i][j] ))%mod ;
        ans  = ( ans + dfs( i - 1 , j , grid , grid[i][j] ))%mod ;
        ans  = ( ans + dfs( i  , j + 1 , grid , grid[i][j]))%mod ;
        ans  = ( ans + dfs( i ,  j - 1 , grid , grid[i][j]))%mod ;
        
        return  dp[i][j] = ans ;
    }
    int countPaths(vector<vector<int>>& grid) {
        m = grid.size() ;
        n = grid[0].size() ;
        
        int ans = 0 ;
        
        dp.resize( m , vector<int>( n , -1 ) ) ;
        
        for( int i = 0 ; i < m ; i++ )
        {
            for( int j = 0 ; j < n ; j++ )
            {
                ans = ( ans + dfs( i , j , grid , 0 ))%mod ;
            }
        }
        
        return ans ;
    }
};