//{ Driver Code Starts
#include <bits/stdc++.h>
using namespace std;


// } Driver Code Ends

class Solution
{
    public:
    bool prime(int a)
    {
        if(a==1)
        {
            return 0;
        }
        for(int i=2; i<=sqrt(a); i++)
        {
            if(a%i==0)
            {
                return 0;
            }
        }
        return 1;
    }
    int minNumber(int arr[],int N)
    {
        int i,sum=0,ans=0;
        for(i=0; i<N; i++)
        {
            sum+=arr[i];
        }
        int nxt=sum;
        while(nxt)
        {
            if(prime(nxt))
            {
                ans=nxt;
                break;
            }
            nxt++;
        }
        int res=ans-sum;
        return res;
    }
};


//{ Driver Code Starts.

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int t;
    cin>>t;
    while(t--)
    {
        int n;
        cin>>n;
        int arr[n];
        for(int i=0;i<n;i++)
            cin>>arr[i];
        Solution obj;
        cout << obj.minNumber(arr, n)<<endl;
    }
    return 0;
}
// } Driver Code Ends