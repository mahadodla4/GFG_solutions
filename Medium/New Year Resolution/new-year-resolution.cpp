//{ Driver Code Starts
#include <bits/stdc++.h>
using namespace std;

// } Driver Code Ends
//User function Template for C++

class Solution 
{
    public:
    int find(int coins[],int n,int i,int sum)
    {
        if(sum!=0 and (sum==2024 or sum%20==0 or sum%24==0))
        {
            return 1;
        }
        if(i==n)
        {
            return 0;
        }
        int pick=find(coins,n,i+1,sum+coins[i]);
        if(pick==1)
        {
            return 1;
        }
        int notpick=find(coins,n,i+1,sum);
        return pick||notpick;
    }
    int isPossible(int n, int coins[]) 
    {
        return find(coins,n,0,0);
    }
    
};




//{ Driver Code Starts.
int main() {
    int t;
    cin >> t;
    while (t--) {
        int N;
        
        cin>>N;
        int coins[N];
        for(int i=0 ; i<N ; i++)
            cin>>coins[i];

        Solution ob;
        cout << ob.isPossible(N,coins) << endl;
    }
    return 0;
}
// } Driver Code Ends