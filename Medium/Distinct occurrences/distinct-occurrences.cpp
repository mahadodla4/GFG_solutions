//{ Driver Code Starts
#include <bits/stdc++.h>
using namespace std;
 

// } Driver Code Ends
/*You are required to complete this method*/

class Solution
{
    public:
    int dp[1000][1000];
    int mod=1000000007;
    int spoiler(int i,int j,int n,int m,string s,string t)
    {
        if(j>=m)
        {
            return 1;
        }
        if(i>=n)
        {
            return 0;
        }
        if(dp[i][j]!=-1)
        {
            return dp[i][j]%mod;
        }
        int c=0;
        if(s[i]==t[j])
        {
            c+=spoiler(i+1,j+1,n,m,s,t);
        }
        c+=spoiler(i+1,j,n,m,s,t);
        return dp[i][j]=c%mod;
    }
    int subsequenceCount(string s, string t)
    {
        int i,j,c=0,n=s.size(),m=t.size();
        memset(dp,-1,sizeof(dp));
        return spoiler(0,0,n,m,s,t);
    }
};
 


//{ Driver Code Starts. 

//  Driver code to check above method
int main()
{
	int t;
	cin>>t;
	while(t--)
	{
		string s;
		string tt;
		cin>>s;
		cin>>tt;
		
		Solution ob;
		cout<<ob.subsequenceCount(s,tt)<<endl;
		
		
	}
  
}
// } Driver Code Ends