//{ Driver Code Starts
// Initial Template for C++
#include <bits/stdc++.h>
using namespace std;


// } Driver Code Ends
class Solution {
  public:
    int longestUniqueSubstr(string &s) {
        int ans=1;
        unordered_map<char,int>mp;
        mp[s[0]]=0;
        int ind=0;
        for(int i=1; i<s.size(); i++) {
            if(mp.find(s[i])==mp.end() or mp[s[i]]<ind) {
                mp[s[i]]=i;
                ans=max(i-ind+1,ans);
            }
            else {
                ind=mp[s[i]]+1;
                mp[s[i]]=i;
                ans=max(i-ind+1,ans);
            }
        }
        return ans;
    }
};


//{ Driver Code Starts.

int main() {

    int t;
    cin >> t;
    while (t--) {

        Solution obj;
        string s;
        cin >> s;
        cout << obj.longestUniqueSubstr(s) << endl;
        cout << "~"
             << "\n";
    }

    return 0;
}

// } Driver Code Ends