//{ Driver Code Starts
#include<bits/stdc++.h>
using namespace std;


// } Driver Code Ends
class Solution {
public:
    long long dp[100][100][100];
    long long spoiler(int r,int c,int n,int k,vector<vector<int>>&arr)
    {
        if(r>=n or c>=n or k<0)
        {
            return 0;
        }
        if(r==n-1 and c==n-1)
        {
            if(k==arr[r][c])
            {
                return 1;
            }
            return 0;
        }
        if(dp[r][c][k]!=-1)
        {
            return dp[r][c][k];
        }
        int a=spoiler(r,c+1,n,k-arr[r][c],arr);
        int b=spoiler(r+1,c,n,k-arr[r][c],arr);
        dp[r][c][k]=a+b;
        return dp[r][c][k];
    }
    long long numberOfPath(int n, int k, vector<vector<int>> &arr)
    {
        memset(dp,-1,sizeof(dp));
        return spoiler(0,0,n,k,arr);
    }
};

//{ Driver Code Starts.

int main()
{
    Solution obj;
    int i,j,k,l,m,n,t;
    cin>>t;
    while(t--)
    {
        cin>>k>>n;
        vector<vector<int>> v(n, vector<int>(n, 0));
        for(i=0;i<n;i++)
            for(j=0;j<n;j++)
                cin>>v[i][j];
        cout << obj.numberOfPath(n, k, v) << endl;
    }
}
// } Driver Code Ends