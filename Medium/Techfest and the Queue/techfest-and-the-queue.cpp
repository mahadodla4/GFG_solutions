//{ Driver Code Starts

#include<bits/stdc++.h>
using namespace std;

// } Driver Code Ends

class Solution {
public:
    void prime_factors(int n,vector<int>&l)
    {
        while(n%2==0)
        {
            l.push_back(2);
            n=n/2;
        }
        for(int i=3; i<=sqrt(n); i++)
        {
            while(n%i==0)
            {
                l.push_back(i);
                n=n/i;
            }
        }
        if(n!=1)
        {
            l.push_back(n);
        }
    }
	int sumOfPowers(int a, int b)
	{
	    vector<int>l;
	    for(int i=a; i<=b; i++)
	    {
	        prime_factors(i,l);
	    }
	    return l.size();
	}
};

//{ Driver Code Starts.
int main(){
	int tc;
	cin >> tc;
	while(tc--){
		int a, b;
		cin >>  a >> b;
		Solution obj;
		int ans = obj.sumOfPowers(a, b);
		cout << ans <<"\n";
	}
	return 0;
}
// } Driver Code Ends