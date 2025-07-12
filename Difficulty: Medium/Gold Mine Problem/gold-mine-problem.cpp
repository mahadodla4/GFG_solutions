class Solution {
  public:
    bool isValid(int i, int j, int n, int m) {
        return (i>=0 && j>=0 && i<n && j<m);
    }
    
    int fun(int i, int j, int n, int m, vector<vector<int>>& mat, vector<vector<int>>& dp) {
        if(!isValid(i, j, n, m)) {
          return 0;
        }
        if(dp[i][j] != -1) {
          return dp[i][j];
        }
        return dp[i][j] = mat[i][j] + max({fun(i-1, j+1, n, m, mat, dp), fun(i, j+1, n, m, mat, dp), fun(i+1, j+1, n, m, mat, dp)});
    }
  
    int maxGold(vector<vector<int>>& mat) {
        int n = mat.size();
        int m = mat[0].size();
        vector<vector<int>> dp(n+1, vector<int>(m+1,-1));
        int ans = -1;
        for(int i=0; i<n; i++) {
            dp[i][0] = fun(i, 0, n, m, mat, dp);
            ans = max(ans, dp[i][0]);
        }
        
        return ans;
    }
};

