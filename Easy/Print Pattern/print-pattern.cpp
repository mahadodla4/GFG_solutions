//{ Driver Code Starts
// Initial Template for C++

#include <bits/stdc++.h>
using namespace std;

// } Driver Code Ends
// User function Template for C++

class Solution{
public:
    void pattern(int a,vector<int>&res)
    {
        res.push_back(a);
        if(a<=0)
        {
            return;
        }
        else
        {
            pattern(a-5,res);
        }
        res.push_back(a);
    }
    vector<int> pattern(int N)
    {
        vector<int>res;
        pattern(N,res);
        return res;
    }
};

//{ Driver Code Starts.

int main(){
    int t;
    cin>>t;
    while(t--){
        int N;
        cin>>N;
        
        Solution ob;
        vector<int> ans = ob.pattern(N);
        for(int u: ans)
            cout<<u<<" ";
        cout<<"\n";
    }
    return 0;
}
// } Driver Code Ends