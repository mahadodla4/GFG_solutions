//{ Driver Code Starts
#include <bits/stdc++.h>
using namespace std;

// } Driver Code Ends
class Solution{
    public:
     vector<int> findMean(int arr[],int queries[],int n,int q)
    {
        int pref[n];
        pref[0]=arr[0];
        int i;
        for(i=1; i<n; i++)
        {
            pref[i]=arr[i]+pref[i-1];
        }
        vector<int>res;
        for(i=0; i<q; i+=2)
        {
            int l=queries[i];
            int r=queries[i+1];
            int num=r-l+1;
            int sum=0;
            if(l==0)
            {
                sum=pref[r];
                res.push_back(sum/num);
            }
            else
            {
                sum=pref[r]-pref[l-1];
                res.push_back(sum/num);
            }
        }
        return res;
    }

};

//{ Driver Code Starts.
int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        int n,q;
        cin>>n>>q;
        int arr[n + 1],queries[2*q + 1];

        for(int i=0;i<n;i++){
            cin>>arr[i];
        }

        for(int i=0;i<2*q;i++){
            cin>>queries[i];
        }

        vector<int> ans;
        Solution ob;
        ans = ob.findMean(arr,queries,n,2*q);

        for(int i:ans)
            cout<<i<<" ";
        cout<<endl;

    }
    return 0;
}

// } Driver Code Ends