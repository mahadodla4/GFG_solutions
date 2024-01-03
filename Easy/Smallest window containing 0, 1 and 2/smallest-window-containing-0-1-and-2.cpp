//{ Driver Code Starts
#include <bits/stdc++.h>
using namespace std;


// } Driver Code Ends
// User function Template for C++

class Solution {
  public:
    int smallestSubstring(string s) 
    {
        int i,n=s.size(),zero=0,one=0,two=0,ans=INT_MAX,st=0;
        map<char,int>mp;
        for(i=0; i<n; i++)
        {
            if(s[i]=='0') zero++;
            if(s[i]=='1') one++;
            if(s[i]=='2') two++;
            while(zero>0 and one>0 and two>0)
            {
                ans=min(ans,i-st+1);
                if(s[st]=='0') zero--;
                if(s[st]=='1') one--;
                if(s[st]=='2') two--;
                st++;
            }
        }
        if(ans==INT_MAX)
        {
            return -1;
        }
        return ans;
    }
};


//{ Driver Code Starts.

int main() {
    int t;
    cin >> t;
    while (t--) {
        string S;
        cin >> S;
        Solution ob;
        cout << ob.smallestSubstring(S);
        cout << endl;
    }
}
// } Driver Code Ends