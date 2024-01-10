//{ Driver Code Starts
#include <bits/stdc++.h>

using namespace std;

// } Driver Code Ends
//User function template for C++
class Solution{
public:	
	int longSubarrWthSumDivByK(int arr[], int n, int k)
	{
	    int i,ans=0;
	    int pref[n];
	    pref[0]=arr[0];
	    for(i=1; i<n; i++)
	    {
	        pref[i]=pref[i-1]+arr[i];
	    }
	    map<int,int>mp;
	    mp[0]=-1;
	    for(i=0; i<n; i++)
	    {
	        int rem=pref[i]%k;
	        if(rem<0)
	        {
	            rem=rem+k;
	        }
	        if(mp.find(rem)!=mp.end())
	        {
	            ans=max(ans,i-mp[rem]);
	        }
	        else
	        {
	            mp[rem]=i;
	        }
	    }
	    return ans;
	}
};

//{ Driver Code Starts.

int main()
{
	int t;
	cin>>t;
	while(t--)
	{
	int n,k,i;
	cin>>n>>k; int arr[n];
	for(i=0;i<n;i++)
	cin>>arr[i];
	Solution ob;
	cout<<ob.longSubarrWthSumDivByK(arr, n, k)<<"\n";
	}
	return 0;	 
}

// } Driver Code Ends