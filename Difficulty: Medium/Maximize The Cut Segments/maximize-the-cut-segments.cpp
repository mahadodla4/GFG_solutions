//{ Driver Code Starts
#include<bits/stdc++.h>
using namespace std;



// } Driver Code Ends
class Solution
{
    public:
    int solve(int x,int y,int z,int n,vector<int>&dp)
    {
        if(n<0) {
            return INT_MIN;
        }
        if(n==0) {
            return 0;
        }
        if(dp[n]!=-1) {
            return dp[n];
        }
        int a=solve(x,y,z,n-x,dp);
        int b=solve(x,y,z,n-y,dp);
        int c=solve(x,y,z,n-z,dp);
        return dp[n]=1+max({a,b,c});
    }
    int maximizeTheCuts(int n, int x, int y, int z)
    {
       vector<int>dp(n+1,-1);
       return max(solve(x,y,z,n,dp),0);
    }
};

//{ Driver Code Starts.
int main() {
    
    //taking testcases
    int t;
    cin >> t;
    while(t--)
    {
        //taking length of line segment
        int n;
        cin >> n;
        
        //taking types of segments
        int x,y,z;
        cin>>x>>y>>z;
        Solution obj;
        //calling function maximizeTheCuts()
        cout<<obj.maximizeTheCuts(n,x,y,z)<<endl;

    }

	return 0;
}
// } Driver Code Ends