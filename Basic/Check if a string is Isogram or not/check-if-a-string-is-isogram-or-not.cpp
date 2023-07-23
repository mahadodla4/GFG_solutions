//{ Driver Code Starts
#include<bits/stdc++.h>
using namespace std;


// } Driver Code Ends


class Solution
{
    public:
    //Function to check if a string is Isogram or not.
    bool isIsogram(string s)
    {
        map<char,int>mp;
        int c=0;
        for(auto i:s)
        {
            mp[i]++;
        }
        for(auto i:mp)
        {
            if(i.second==1)
            {
                c++;
            }
        }
        if(c==s.size())
        {
            return 1;
        }
        return 0;
    }
};

//{ Driver Code Starts.

int main()
 {
    int t;
    cin>>t;
    while(t--)
    {
        
        string s;
        cin>>s;
        Solution obj;
        cout<<obj.isIsogram(s)<<endl;
        
    }
	return 0;
}
// } Driver Code Ends