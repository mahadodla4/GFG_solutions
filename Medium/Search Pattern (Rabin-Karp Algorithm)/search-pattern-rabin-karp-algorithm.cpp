//{ Driver Code Starts
#include<bits/stdc++.h>
using namespace std;


// } Driver Code Ends
class Solution
{
    public:
        vector <int> search(string pattern, string text)
        {
            vector<int>l;
            int i,m=pattern.size(),n=text.size();
            for(i=0; i<n-m+1; i++)
            {
                string a=text.substr(i,m);
                //cout<<a<<" ";
                if(a==pattern)
                {
                    l.push_back(i+1);
                }
            }
            return l;
        }
     
};

//{ Driver Code Starts.
int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        string S, pat;
        cin >> S >> pat;
        Solution ob;
        vector <int> res = ob.search(pat, S);
        for (int i : res) cout << i << " ";
        cout << endl;
    }
    return 0;
}

// Contributed By: Pranay Bansal

// } Driver Code Ends