//{ Driver Code Starts
#include<bits/stdc++.h>
using namespace std;

// } Driver Code Ends
class Solution {
	public:
	    bool prime(int n)
	    {
	        
	        if(n<2)
	        {
	            return 0;
	        }
	        for(int i=2; i<=sqrt(n); i++)
	        {
	            if(n%i==0)
	            {
	                return 0;
	            }
	        }
	        return 1;
	    }
	    bool pal(int p)
	    {
	        int m=p,r=0;
	        while(m>0)
	        {
	            r=m%10+r*10;
	            m=m/10;
	        }
	        return r==p;
	    }
		int PrimePalindrome(int N)
		{
		    int nxt=N;
		    while(nxt)
		    {
		        if(pal(nxt) and prime(nxt))
		        {
		            return nxt;
		        }
		        nxt++;
		    }
		    return -1;
		}

};


//{ Driver Code Starts.
int main(){
	int tc;
	cin >> tc;
	while(tc--){
		int N;
		cin >> N;
		Solution obj;
		int ans = obj.PrimePalindrome(N);
		cout << ans << "\n";
	}
	return 0;
}
// } Driver Code Ends