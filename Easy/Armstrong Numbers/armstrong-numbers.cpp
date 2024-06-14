//{ Driver Code Starts
// Initial Template for C++
#include <bits/stdc++.h>
using namespace std;


// } Driver Code Ends
// User function Template for C++
class Solution {
  public:
    string armstrongNumber(int n) 
    {
        int val=n;
        int ones=n%10;
        n=n/10;
        int tens=n%10;
        n=n/10;
        int hund=n%10;
        //cout<<ones<<" "<<tens<<" "<<hund<<endl;
        if(((ones*ones*ones)+(tens*tens*tens)+(hund*hund*hund))==val)
        {
            return "true";
        }
        return "false";
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
        cout << ob.armstrongNumber(n) << endl;
    }
    return 0;
}

// } Driver Code Ends