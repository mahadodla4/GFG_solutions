//{ Driver Code Starts
// Initial Template for C++
#include <bits/stdc++.h>
using namespace std;

// } Driver Code Ends
//User function template for C++

class Solution {
public:
    vector<int> factorial(int n)
    {
        int i,j,val,res=0,carry=0;
        vector<int>l;
        l.push_back(1);
        for(i=1; i<=n; i++)
        {
            for(j=0; j<l.size(); j++)
            {
                res=(l[j]*i)+carry;
                l[j]=res%10;
                carry=res/10;
            }
            while(carry!=0)
            {
                l.push_back(carry%10);
                carry=carry/10;
            }
        }
        reverse(l.begin(),l.end());
        return l;
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
        vector<int> result = ob.factorial(N);
        for (int i = 0; i < result.size(); ++i){
            cout<< result[i];
        }
        cout << endl;
    }
    return 0;
}
// } Driver Code Ends