//{ Driver Code Starts
#include<bits/stdc++.h>

using namespace std;


// } Driver Code Ends
class Solution{

    // Function to find the trapped water between the blocks.
    public:
    long long trappingWater(int arr[], int n)
    {
        long long i;
        int pref_max[n],suff_max[n];
        pref_max[0]=arr[0];
        suff_max[n-1]=arr[n-1];
        for(i=1; i<n; i++)
        {
            pref_max[i]=max(pref_max[i-1],arr[i]);
        }
        for(i=n-2; i>=0; i--)
        {
            suff_max[i]=max(suff_max[i+1],arr[i]);
        }
        long long sum=0;
        for(i=0; i<n; i++)
        {
            int val=min(pref_max[i],suff_max[i]);
            int res=val-arr[i];
            sum+=res;
        }
        return sum;
    }
};

//{ Driver Code Starts.

int main(){
    
    int t;
    //testcases
    cin >> t;
    
    while(t--){
        int n;
        
        //size of array
        cin >> n;
        
        int a[n];
        
        //adding elements to the array
        for(int i =0;i<n;i++){
            cin >> a[i];            
        }
        Solution obj;
        //calling trappingWater() function
        cout << obj.trappingWater(a, n) << endl;
        
    }
    
    return 0;
}
// } Driver Code Ends