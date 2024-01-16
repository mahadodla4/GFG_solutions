//{ Driver Code Starts
// Initial Template for C++

#include <bits/stdc++.h>
using namespace std;

// } Driver Code Ends
// User function Template for C++

class Solution{
public:
    int fun(int i,int ind,int m,int n)
    {
        if(m<n)
        {
            return 0;
        }
        if(ind>=n-1)
        {
            return i<=m;
        }
        int ans=0;
        for(int j=i*2; j<=m; j++)
        {
            ans+=fun(j,ind+1,m,n);
        }
        return ans;
    }
    int numberSequence(int m, int n)
    {
        int i,ans=0;
        for(i=1; i<=m; i++)
        {
            ans+=fun(i,0,m,n);
        }
        return ans;
    }
};

//{ Driver Code Starts.
int main(){
    int t;
    cin>>t;
    while(t--){
        int m, n;
        cin>>m>>n;
        
        Solution ob;
        cout<<ob.numberSequence(m, n)<<endl;
    }
    return 0;
}
// } Driver Code Ends