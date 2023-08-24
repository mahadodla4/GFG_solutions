//{ Driver Code Starts
#include <bits/stdc++.h>
using namespace std;


// } Driver Code Ends
class Solution{
    public:
    static bool comp(int a,int b)
    {
        int a1=__builtin_popcount(a);
        int b1=__builtin_popcount(b);
        if(a1<=b1)
        {
            return 0;
        }
        return 1;
    }
    void sortBySetBitCount(int arr[], int n)
    {
        stable_sort(arr,arr+n,comp);
    }
};


//{ Driver Code Starts.

int main()
{
    int t;
    cin>>t;
    while(t--){
        int n;
        cin>>n;
        int arr[n];
        for(int i=0;i<n;i++){
            cin>>arr[i];
        }
        Solution ob;
        ob.sortBySetBitCount(arr, n);
        for (int i = 0; i < n; i++)
            cout << arr[i] << " ";
        cout << endl;
    }
    return 0;
}

// } Driver Code Ends