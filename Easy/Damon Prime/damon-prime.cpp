//{ Driver Code Starts
// Initial Template for C++
#include <bits/stdc++.h>
using namespace std;

// } Driver Code Ends
// User function Template for C++
class Solution {
  public:
    bool prime(int n)
    {
        int i;
        if(n<2)
        {
            return 0;
        }
        for(i=2; i<=sqrt(n); i++)
        {
            if(n%i==0)
            {
                return 0;
            }
        }
        return 1;
    }
    string damonPrime(int N)
    {
        int a=N+1;
        int b=N-1;
        if(prime(a) and prime(b))
        {
            return "Yes";
        }
        return "No";
    }
};

//{ Driver Code Starts.
int main() {
    int t;
    cin >> t;
    while (t--) {
        int N;
        cin >> N;
        Solution ob;
        cout << ob.damonPrime(N) << endl;
    }
    return 0;
}

// } Driver Code Ends