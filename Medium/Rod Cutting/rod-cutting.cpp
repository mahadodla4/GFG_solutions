//{ Driver Code Starts
// Initial Template for C++

#include <bits/stdc++.h>
using namespace std;


// } Driver Code Ends
// User function Template for C++

class Solution
{
  public:
    int spoiler(int n,int prices[],vector<int>&dp)
    {
        if(n==0)
        {
            return 0;
        }
        if(dp[n]!=-1)
        {
            return dp[n];
        }
        int i,maxi=INT_MIN;
        for(i=0; i<n; i++)
        {
            int cut=i+1;
            int prescut=prices[i]+spoiler(n-cut,prices,dp);
            maxi=max(maxi,prescut);
        }
        dp[n]=maxi;
        return dp[n];
    }
    int cutRod(int prices[], int n) 
    {
        vector<int>dp(n+1,-1);
        return spoiler(n,prices,dp);
    }
};

//{ Driver Code Starts.

int main() {
    int t;
    cin >> t;
    while (t--) {
        int n;
        cin >> n;
        int a[n];
        for (int i = 0; i < n; i++) 
            cin >> a[i];
            
        Solution ob;

        cout << ob.cutRod(a, n) << endl;
    }
    return 0;
}
// } Driver Code Ends