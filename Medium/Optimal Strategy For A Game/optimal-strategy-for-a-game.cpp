//{ Driver Code Starts
#include <bits/stdc++.h>
using namespace std;

// } Driver Code Ends

//Function to find the maximum possible amount of money we can win.
class Solution{
    public:
    int dp[1001][1001];
    long long spoiler(int n,int arr[],int i,int j)
    {
        if(i>j) return 0;
        if(dp[i][j]!=-1)
        {
            return dp[i][j];
        }
        long long pick=arr[i]+min(spoiler(n,arr,i+2,j),spoiler(n,arr,i+1,j-1));
        long long non_pick=arr[j]+min(spoiler(n,arr,i+1,j-1),spoiler(n,arr,i,j-2));
        long long ans=max(pick,non_pick);
        return dp[i][j]=ans;
    }
    long long maximumAmount(int n, int arr[])
    {
        memset(dp,-1,sizeof(dp));
        return spoiler(n,arr,0,n-1);
    }
};

//{ Driver Code Starts.
int main() 
{
   
   	int t;
	cin>>t;
	while(t--)
	{
		int n;
		cin>>n;
		int a[n];
		for(int i=0;i<n;i++)
		cin>>a[i];
		Solution ob;
		cout<< ob.maximumAmount(n,a)<<endl;
	}
	return 0;
}
// } Driver Code Ends