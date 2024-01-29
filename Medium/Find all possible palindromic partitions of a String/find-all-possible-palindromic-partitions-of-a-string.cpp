//{ Driver Code Starts
#include <bits/stdc++.h>
using namespace std;

// } Driver Code Ends
//User function Template for C++

class Solution {
  public:
    bool pal(string a)
    {
        string b=a;
        reverse(b.begin(),b.end());
        if(a==b) return 1;
        return 0;
    }
    void fun(int ind,int n,string S,vector<string>&l,vector<vector<string>>&final)
    {
        if(ind==n)
        {
            final.push_back(l);
            return;
        }
        for(int i=ind; i<n; i++)
        {
            string m=S.substr(ind,i-ind+1);
            if(pal(m))
            {
                l.push_back(m);
                fun(i+1,n,S,l,final);
                l.pop_back();
            }
        }
        
    }
    vector<vector<string>> allPalindromicPerms(string S) 
    {
        vector<vector<string>>final;
        vector<string>l;
        int i,n=S.size();
        fun(0,n,S,l,final);
        return final;
    }
};

//{ Driver Code Starts.
int main() {
    int t;
    cin >> t;
    while (t--) {
        string S;
        
        cin>>S;

        Solution ob;
        vector<vector<string>> ptr = ob.allPalindromicPerms(S);
        
        for(int i=0; i<ptr.size(); i++)
        {
            for(int j=0; j<ptr[i].size(); j++)
            {
                cout<<ptr[i][j]<<" ";
            }
            cout<<endl;
        }
    }
    return 0;
}
// } Driver Code Ends