//{ Driver Code Starts
#include <bits/stdc++.h>
using namespace std;


// } Driver Code Ends
class Solution {
  public:
    // Function is to check whether two strings are anagram of each other or not.
    bool areAnagrams(string& s1, string& s2) {
        if(s1.size()!=s2.size()) {
            return false;
        }
        map<int,int>mp1,mp2;
        for(auto i:s1) {
            mp1[i]++;
        }
        for(auto i:s2) {
            mp2[i]++;
        }
        if(mp1==mp2) {
            return true;
        }
        return false;
    }
};

//{ Driver Code Starts.

int main() {

    int t;

    cin >> t;

    while (t--) {
        string c, d;

        cin >> c >> d;
        Solution obj;
        if (obj.areAnagrams(c, d))
            cout << "true" << endl;
        else
            cout << "false" << endl;
        cout << "~" << endl;
    }
}

// } Driver Code Ends