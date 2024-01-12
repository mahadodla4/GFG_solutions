//{ Driver Code Starts
// Initial Template for C++

#include <bits/stdc++.h>
using namespace std;

// } Driver Code Ends
// User function Template for C++


int n=1000001;
vector<int>primes(n,1);
class Solution {
  public:
    void seive()
    {
        int i,j;
        primes[0]=primes[1]=0;
        for(i=2; i*i<=n; i++)
        {
            if(primes[i]==1)
            {
                for(j=i*i; j<n; j+=i)
                {
                    primes[j]=0;
                }
            }
        }
    }
    int countPrimes(int L, int R) 
    {
        seive();
        int i,c=0;
        for(i=L; i<=R; i++)
        {
            if(primes[i]==1)
            {
                c++;
            }
        }
        return c;
    }
};

//{ Driver Code Starts.
int main() {
    int t;
    cin >> t;
    while (t--) {
        int L, R;
        cin >> L >> R;
        Solution ob;
        int ans = ob.countPrimes(L, R);
        cout << ans << "\n";
    }
}
// } Driver Code Ends