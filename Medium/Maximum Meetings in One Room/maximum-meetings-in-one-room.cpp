//{ Driver Code Starts
//Initial Template for C++

#include <bits/stdc++.h>
using namespace std;


// } Driver Code Ends
//User function Template for C++

class Solution{
public:
    vector<int> maxMeetings(int N,vector<int> &S,vector<int> &F)
    {
        vector<int>l;
        vector<pair<int,int>>res;
        int i;
        for(i=0; i<N; i++)
        {
            res.push_back({F[i],i+1});
        }
        sort(res.begin(),res.end());
        l.push_back(res[0].second);
        int end=res[0].first;
        for(i=0; i<N ;i++)
        {
            if(S[res[i].second-1]>end)
            {
                l.push_back(res[i].second);
                end=res[i].first;
            }
        }
        sort(l.begin(),l.end());
        return l;
    }
};

//{ Driver Code Starts.

int main(){
    int t;
    cin>>t;
    while(t--){
        int n;
        cin>>n;
        vector<int> S(n),F(n);
        for(int i=0;i<n;i++){
            cin>>S[i];
        }
        for(int i=0;i<n;i++){
            cin>>F[i];
        }
        Solution ob;
        vector<int> ans=ob.maxMeetings(n,S,F);
        for(int i=0;i<ans.size();i++){
            cout<<ans[i];
            if(i!=ans.size()-1){
                cout<<" ";
            }
        }
        cout<<endl;
    }
    return 0;
}
// } Driver Code Ends