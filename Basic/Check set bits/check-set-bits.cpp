//{ Driver Code Starts
#include<bits/stdc++.h> 
using namespace std;

// } Driver Code Ends
   
class Solution{
public:
    int isBitSet(int n)
    {
        if(n==0)
        {
            return 0;
        }
        int l=0,c=0;
        while(n)
        {
            if((n&1)==1)
            {
                c++;
            }
            n=n>>1;
            l++;
        }
        if(c==l)
        {
            return 1;
        }
        return 0;
    }
};

//{ Driver Code Starts.
int main() 
{ 
    int t;
    cin>>t;
    while(t--)
    {
        int N;
        cin>>N;
        Solution ob;
        cout << ob.isBitSet(N) << endl;
    }
    return 0; 
}
// } Driver Code Ends