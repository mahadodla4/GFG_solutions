//{ Driver Code Starts
// Initial Template for C++

#include <bits/stdc++.h>
using namespace std;

// } Driver Code Ends
// User function Template for C++

class Solution{
public:
    int xorCal(int k)
    {
        if(k==0)
        {
            return 0;
        }
        int i,flag=0;
        for(i=1; i<100; i++)
        {
            if((i^(i+1))==k)
            {
                flag=1;
                return i;
            }
        }
        if(flag==0)
        {
            return -1;
        }
    }
};

//{ Driver Code Starts.

int main(){
    int t;
    cin>>t;
    while(t--){
        int k;
        cin>>k;
        
        Solution ob;
        cout<<ob.xorCal(k)<<"\n";
    }
    return 0;
}
// } Driver Code Ends