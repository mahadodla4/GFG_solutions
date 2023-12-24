//{ Driver Code Starts
/* Driver program to test above function */

#include<bits/stdc++.h>
using namespace std;

// } Driver Code Ends
class Solution {
public:
    int buyMaximumProducts(int n, int k, int price[])
    {
        vector<pair<int,int>>l;
        int i,count=0;
        for(i=0; i<n; i++)
        {
            l.push_back({price[i],i+1});
        }
        sort(l.begin(),l.end());
        for(auto i:l)
        {
            int a=i.first;
            int b=i.second;
            int c=a*b;
            if(c<=k)
            {
                count+=b;
                k-=c;
            }
            else
            {
                int div=k/a;
                count+=div;
                k-=(a*div);
            }
        }
        return count;
    }
};








//{ Driver Code Starts.
int main()
{
	int t;
	cin>>t;
	while(t--)
	{
	    int n, k;
	    cin >> n >> k;
	    int price[n];
	    for(int i = 0 ; i < n; i++){
	        cin >> price[i];
	    }
	    Solution ob;
	    int ans = ob.buyMaximumProducts(n, k, price);
	    cout << ans<<endl;
	}
	return 0;
}

// } Driver Code Ends