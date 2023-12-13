//{ Driver Code Starts
#include <bits/stdc++.h>

using namespace std;
#define ll long long

// } Driver Code Ends
//User function template for C++
class Solution{
public:
	// #define ll long long
	ll countStrings(int n) 
	{
	    int mod=1e9+7;
	    if(n==1)
	    {
	        return 2;
	    }
	    if(n==2)
	    {
	        return 3;
	    }
	    ll a=2,b=3,c,i;
	    for(i=3; i<=n; i++)
	    {
	        c=((a%mod)+(b%mod))%mod;
	        a=b;
	        b=c;
	    }
	    return c;
	}
};

//{ Driver Code Starts.

int main() {
    int t;
    cin >> t;
    while (t--) {
        int n;
        cin >> n;
        Solution ob;
        auto ans = ob.countStrings(n);
        cout << ans << "\n";
    }
    return 0;
}
// } Driver Code Ends