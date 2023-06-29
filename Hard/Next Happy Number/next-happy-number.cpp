//{ Driver Code Starts
#include<bits/stdc++.h> 
using namespace std;

// } Driver Code Ends
class Solution{
public:
    int sos(int p)
    {
        int q=p,r,sum=0,c=6;
        while(c--)
        {
            sum=0;
            while(q)
            {
                r=q%10;
                sum=sum+(r*r);
                q=q/10;
            }
            if(sum==1)
            {
                return 1;
            }
            q=sum;
        }
        return 0;
    }
    int nextHappy(int N)
    {
        int n=N+1;
        while(n)
        {
            if(sos(n))
            {
                return n;
            }
            n++;
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
        cout << ob.nextHappy(N) << endl;
    }
    return 0; 
}
// } Driver Code Ends