//{ Driver Code Starts
// Initial Template for C++

#include <bits/stdc++.h>
using namespace std;

// } Driver Code Ends
// User function Template for C++

class Solution{
public:
    vector<int> recamanSequence(int n)
    {
        vector<int>a(n+1);
        a[0]=0;
        map<int,int>mp;
        mp[a[0]]++;
        vector<int>res;
        res.push_back(0);
        for(int i=1; i<=n; i++)
        {
            int ans=a[i-1]-i;
            //cout<<ans<<" ";
            if(ans<0 or mp.find(ans)!=mp.end())
            {
                a[i]=a[i-1]+i;
            }
            else
            {
                a[i]=ans;
            }
            mp[a[i]]++;
            res.push_back(a[i]);
        }
        return res;
    }
};

//{ Driver Code Starts.

int main(){
    int t;
    cin>>t;
    while(t--){
        int n;
        cin>>n;
        
        Solution ob;
        vector<int> ans = ob.recamanSequence(n);
        for(int i = 0;i < n;i++)
            cout<<ans[i]<<" ";
        cout<<"\n";
    }
    return 0;
}
// } Driver Code Ends