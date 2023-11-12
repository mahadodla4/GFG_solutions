//{ Driver Code Starts
// C++ program to check if two strings are isomorphic


#include<bits/stdc++.h>


using namespace std;
#define MAX_CHARS 256

// } Driver Code Ends
class Solution
{
    public:
    //Function to check if two strings are isomorphic.
    bool areIsomorphic(string str1, string str2)
    {
        if(str1.size()!=str2.size())
        {
            return 0;
        }
        unordered_map<char,char>mp;
        vector<int>alpha(26,-1);
        int i,n=str1.size();
        for(i=0; i<n; i++)
        {
            if(mp.find(str1[i])!=mp.end())
            {
                if(mp[str1[i]]!=str2[i])
                {
                    return 0;
                }
            }
            else
            {
                if(alpha[str2[i]-'a']!=-1)
                {
                    return 0;
                }
                else
                {
                    mp[str1[i]]=str2[i];
                    alpha[str2[i]-'a']=1;
                }
            }
        }
        return 1;
    }
};

//{ Driver Code Starts.

// Driver program
int main()
{
    int t;
    cin>>t;
    string s1,s2;
    while (t--) {
        cin>>s1;
        cin>>s2;
        Solution obj;
        cout<<obj.areIsomorphic(s1,s2)<<endl;
    }
    
    return 0;
}
// } Driver Code Ends