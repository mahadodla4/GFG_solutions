//{ Driver Code Starts
#include<bits/stdc++.h>
using namespace std;
string firstRepChar(string s);
int main()
 {
    int t;
    cin>>t;
    while(t--)
    {
        string s;
        cin>>s;
        cout<<firstRepChar(s)<<endl;
    }
	return 0;
}
// } Driver Code Ends


string firstRepChar(string s)
{
    unordered_map<char,int>mp;
    string b="";
    for(auto i:s)
    {
        mp[i]++;
        if(mp[i]>1)
        {
            b+=i;
            return b;
        }
    }
    return "-1";
}