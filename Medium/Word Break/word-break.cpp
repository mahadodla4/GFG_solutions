//{ Driver Code Starts
//Initial template for C++

#include <bits/stdc++.h>
using namespace std;


// } Driver Code Ends
//User function template for C++

// s : given string to search
// dictionary : vector of available strings

class Solution
{
public:
    int wordBreak(int n, string s, vector<string> &d) 
    {
        if(s.size()==0)
        {
            return 1;
        }
        for(auto i:d)
        {
            if(i==s.substr(0,i.size()))
            {
                if(wordBreak(n,s.substr(i.size()),d))
                {
                    return 1;
                }
            }
        }
        return 0;

    }
};

//{ Driver Code Starts.

int main(){
    int t;
    cin>>t;
    while(t--){
        int n;
        cin>>n;
        vector<string> dictionary;
        for(int i=0;i<n;i++){
            string S;
            cin>>S;
            dictionary.push_back(S);
        }
        string s;
        cin>>s;
        Solution ob;
        cout<<ob.wordBreak(n, s, dictionary)<<"\n";
    }
}

// } Driver Code Ends