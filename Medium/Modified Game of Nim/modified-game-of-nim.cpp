//{ Driver Code Starts
// Initial Template for C++

#include <bits/stdc++.h>
using namespace std;

// } Driver Code Ends
// User function Template for C++

class Solution{
public:
    int XOR(int A[],int n)
    {
        int i,res=0;
        for(i=0; i<n; i++)
        {
            res^=A[i];
        }
        return res;
    }
    int findWinner(int n, int A[])
    {
        if(XOR(A,n)==0)
        {
            return 1;
        }
        else
        {
            if(n%2==0)
            {
                return 1;
            }
            else
            {
                return 2;
            }
        }
        return 1;
    }
};

//{ Driver Code Starts.

int main(){
    int t;
    cin>>t;
    while(t--){
        int n;
        cin>>n;
        int A[n];
        for(int i = 0;i < n;i++)
            cin>>A[i];
        
        Solution ob;
        cout<<ob.findWinner(n, A)<<"\n";
    }
    return 0;
}
// } Driver Code Ends