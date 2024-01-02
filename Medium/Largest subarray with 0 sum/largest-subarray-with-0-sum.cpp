//{ Driver Code Starts
//Initial Template for C++

#include <bits/stdc++.h>
using namespace std;


// } Driver Code Ends
/*You are required to complete this function*/

class Solution{
    public:
    int maxLen(vector<int>&A, int n)
    {   
        map<int,int>mp;
        vector<int>l;
        int pref[n];
        pref[0]=A[0];
        int i,res=0;
        for(i=1; i<n; i++)
        {
           pref[i]=pref[i-1]+A[i];
        }
        mp[0]=-1;
        for(i=0; i<n; i++)
        {
            if(mp.find(pref[i])!=mp.end())
            {
               res=max(res,i-mp[pref[i]]);
            }
            else
            {
               mp[pref[i]]=i;
            }
        }
        return res;
    }
};


//{ Driver Code Starts.

int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        int m;
        cin>>m;
        vector<int> array1(m);
        for (int i = 0; i < m; ++i){
            cin>>array1[i];
        }
        Solution ob;
        cout<<ob.maxLen(array1,m)<<endl;
    }
    return 0; 
}



// } Driver Code Ends