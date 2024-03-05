//{ Driver Code Starts
#include<bits/stdc++.h>
using namespace std;


// } Driver Code Ends
class Solution{
    public:
        
    // A[]: input array
    // N: size of array
    // Function to find the maximum index difference.
    int maxIndexDiff(int a[], int n) 
    { 
        int min_arr[n];
        min_arr[0]=a[0];
        for(int i=1; i<n; i++)
        {
            min_arr[i]=min(a[i],min_arr[i-1]);
        }
        int max_arr[n];
        max_arr[n-1]=a[n-1];
        for(int i=n-2; i>=0; i--)
        {
            max_arr[i]=max(a[i],max_arr[i+1]);
        }
        int ans=0,i=0,j=0;
        while(i<n and j<n)
        {
            if(min_arr[i]<=max_arr[j])
            {
                ans=max(ans,j-i);
            }
            else if(min_arr[i]>max_arr[j])
            {
                i++;
            }
            j++;
        }
        return ans;
    }
};

//{ Driver Code Starts.
  
/* Driver program to test above functions */
int main() 
{
    int T;
    //testcases
    cin>>T;
    while(T--){
        int num;
        //size of array
        cin>>num;
        int arr[num];
        
        //inserting elements
        for (int i = 0; i<num; i++)
            cin>>arr[i];
        Solution ob;
        
        //calling maxIndexDiff() function
        cout<<ob.maxIndexDiff(arr, num)<<endl;    
        
    }
    return 0;
} 
// } Driver Code Ends