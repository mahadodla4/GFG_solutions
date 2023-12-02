//{ Driver Code Starts
//Initial Template for C++

#include <bits/stdc++.h>
using namespace std;

// } Driver Code Ends
//User function Template for C++

class Solution{
    public:
    int isRepresentingBST(int arr[], int N)
    {
        vector<int>l;
        vector<int>m;
        for(int i=0; i<N; i++)
        {
            l.push_back(arr[i]);
            m.push_back(arr[i]);
        }
        sort(l.begin(),l.end());
        if(l==m)
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
        cin >> N;
        int arr[N];
        for(int i=0;i<N;i++)cin>>arr[i];
        Solution ob;
        cout<<ob.isRepresentingBST(arr,N)<<endl;
    }
    return 0;
}
// } Driver Code Ends