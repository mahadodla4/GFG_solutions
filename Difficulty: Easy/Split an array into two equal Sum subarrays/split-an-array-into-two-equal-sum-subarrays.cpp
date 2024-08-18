//{ Driver Code Starts
#include <bits/stdc++.h>
using namespace std;


// } Driver Code Ends
class Solution {
  public:
    bool canSplit(vector<int>& arr) 
    {
        int n=arr.size();
        int pref[n],suf[n];
        pref[0]=arr[0];
        suf[n-1]=arr[n-1];
        int i;
        for(i=1; i<n; i++)
        {
            pref[i]=pref[i-1]+arr[i];
        }
        for(i=n-2; i>=0; i--)
        {
            suf[i]=suf[i+1]+arr[i];
        }
        for(i=0; i<n-1; i++)
        {
            if(pref[i]==suf[i+1])
            {
                return true;
            }
        }
        return false;
        
    }
};


//{ Driver Code Starts.

int main() {
    int t;
    cin >> t;
    cin.ignore();
    while (t-- > 0) {
        string s;
        getline(cin, s);
        stringstream ss(s);
        vector<int> arr;
        string temp;
        while (ss >> temp) {
            arr.push_back(stoi(temp));
        }

        Solution obj;
        bool res = obj.canSplit(arr);
        cout << (res ? "true" : "false") << endl;
    }
    return 0;
}
// } Driver Code Ends