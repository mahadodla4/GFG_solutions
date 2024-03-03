//{ Driver Code Starts
#include <bits/stdc++.h>

using namespace std;


// } Driver Code Ends
//User function template for C++
class Solution{
public:
    static bool comp(string &a,string &b)
    {
       string x=a+b;
       string y=b+a;
       return x<y;
    }
	string printLargest(int n, vector<string> &arr) 
	{
	    sort(begin(arr),end(arr),comp);
        string ans="";
        for(auto i:arr)
        {
            ans=i+ans;
        }
        return ans;
	}
};

//{ Driver Code Starts.

int main() {
    int t;
    cin >> t;
    while (t--) {
        int n, i;
        cin >> n;
        vector<string> arr(n);
        for (i = 0; i < n; i++) {
            cin >> arr[i];
        }
        Solution ob;
        auto ans = ob.printLargest(n, arr);
        cout << ans << "\n";
    }
    return 0;
}
// } Driver Code Ends