//{ Driver Code Starts
#include <bits/stdc++.h>
using namespace std;

// } Driver Code Ends
class Solution {
  public:
    string removeOuter(string& s) 
    {
        string res="";
        int c=0;
        for(auto i:s)
        {
            if(i=='(')
            {
                c++;
            }
            if(i==')')
            {
                c--;
            }
            if(c==1 and i=='(')
            {
                continue;
            }
            if(c==0 and i==')')
            {
                continue;
            }
            else
            {
                res+=i;
            }
        }
        return res;
    }
};

//{ Driver Code Starts.

int main() {
    int t;
    cin >> t;
    while (t--) {
        string s;
        cin >> s;
        Solution obj;

        cout << obj.removeOuter(s) << "\n";
    }
}
// } Driver Code Ends