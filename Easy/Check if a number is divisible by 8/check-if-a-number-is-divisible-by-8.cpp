//{ Driver Code Starts

#include <bits/stdc++.h>
using namespace std;

// } Driver Code Ends

class Solution{
    public:
    int DivisibleByEight(string s)
    {
        int i,n=s.size();
        if(n<3)
        {
            if(stoi(s)%8==0)
            {
                return 1;
            }
        }
        string s1="";
        for(i=n-3; i<n; i++)
        {
            s1+=s[i];
        }
        int val=stoi(s1);
        if(val%8==0)
        {
            return 1;
        }
        return -1;
    }
};

//{ Driver Code Starts.
int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        string S;
        cin>>S;
        Solution ob;
        cout<<ob.DivisibleByEight(S)<<"\n";
    }
}
// } Driver Code Ends