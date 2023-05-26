//{ Driver Code Starts
#include<bits/stdc++.h>
using namespace std; 

// } Driver Code Ends
class Solution{
public:
    int onesComplement(int N){
        int num=N,c=0;
        while(N!=0)
        {
            N=(N>>1);
            c++;
        }
        int a=pow(2,c)-1;
        int b=num^a;
        return b;
    }
};

//{ Driver Code Starts.
int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        int n;
        cin>>n;
        
        Solution ob;
        cout<<ob.onesComplement(n)<<"\n";
    }
}
// } Driver Code Ends