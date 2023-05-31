//{ Driver Code Starts
#include <bits/stdc++.h>

using namespace std;

// } Driver Code Ends
class Solution{
public:
    vector<int> findTwoElement(vector<int> arr, int n) 
    {
        map<int,int>mp;
        vector<int>l;
        vector<int>v;
        int i;
        for(i=0; i<n; i++)
        {
            mp[arr[i]]++;
        }
        for(i=1; i<=n; i++)
        {
            v.push_back(i);
        }
        for(auto i:mp)
        {
            if(i.second>1)
            {
                l.push_back(i.first);
            }
        }
        for(i=0; i<n; i++)
        {
            if(mp.find(v[i])==mp.end())
            {
                l.push_back(v[i]);
            }
        }
        return l;
    }
};

//{ Driver Code Starts.

int main() {
    int t;
    cin >> t;
    while (t--) {
        int n;
        cin >> n;
        vector<int> a(n);
        for (int i = 0; i < n; i++) {
            cin >> a[i];
        }
        Solution ob;
        auto ans = ob.findTwoElement(a, n);
        cout << ans[0] << " " << ans[1] << "\n";
    }
    return 0;
}
// } Driver Code Ends