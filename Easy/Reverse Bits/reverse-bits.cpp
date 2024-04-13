//{ Driver Code Starts
#include <bits/stdc++.h>
using namespace std;

// } Driver Code Ends
class Solution {
  public:
    long long reversedBits(long long x) 
    {
        bitset<32>binary(x);
        string s=binary.to_string();
        //reverse(s.begin(),s.end());
        long long i,res=0;
        for(i=0; i<32; i++)
        {
           long long a=s[i]-'0';
           long long b=pow(2,i);
           res+=(a*b);
        }
        return res;
        
    }
};

//{ Driver Code Starts.
int main() {
    int t;
    cin >> t;
    while (t--) {
        long long X;
        
        cin>>X;

        Solution ob;
        cout << ob.reversedBits(X) << endl;
    }
    return 0;
}
// } Driver Code Ends