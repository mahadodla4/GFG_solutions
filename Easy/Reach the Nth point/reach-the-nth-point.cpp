//{ Driver Code Starts
#include<bits/stdc++.h>
using namespace std;

// } Driver Code Ends
class Solution{
	public:
		int nthPoint(int n)
		{
		    if(n==1)
		    {
		        return 1;
		    }
		    if(n==2)
		    {
		        return 2;
		    }
		    int i,a=1,b=2,c;
		    for(i=3; i<=n; i++)
		    {
		        c=(a+b)%1000000007;
		        a=b;
		        b=c;
		    }
		    return c;
		}
};

//{ Driver Code Starts.
int main(){
	int tc;
	cin >> tc;
	while(tc--){
		int n;
		cin >> n;
		Solution ob;
		int ans  = ob.nthPoint(n);
		cout << ans <<"\n";
	}
	return 0;
}
// } Driver Code Ends