//{ Driver Code Starts

#include <bits/stdc++.h>
using namespace std;


// } Driver Code Ends
class Solution {
  public:
    string binaryNextNumber(string s) 
    {
        int i,n=s.size(),carry=1;
        string ans;
        for(i=n-1; i>=0; i--)
        {
            int a=s[i]-'0';
            ans=to_string(a^carry)+ans;
            carry&=a;
        }
        if(carry)
        {
            ans='1'+ans;
        }
        for(i=0; i<ans.size(); i++)
        {
            if(ans[i]!='0')
            {
                break;
            }
        }
        return string(begin(ans)+i,end(ans));
    }
};

//{ Driver Code Starts.
int main() {
    int t;
    cin >> t;
    while (t--) {
        string s;
        cin >> s;
        Solution ob;
        cout << ob.binaryNextNumber(s);
        cout << "\n";
    }

    return 0;
}
// } Driver Code Ends