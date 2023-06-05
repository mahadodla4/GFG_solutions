//{ Driver Code Starts
// C++ program to rearrange an array in minimum 
// maximum form 
#include <bits/stdc++.h>
using namespace std;


// } Driver Code Ends
class Solution{
    public:
    // This function wants you to modify the given input
    // array and no need to return anything
    // arr: input array
    // n: size of array
    //Function to rearrange  the array elements alternately.
    void rearrange(long long *arr, int n) 
    { 
        int min=INT_MAX,max=INT_MIN;
        vector<int>l;
        vector<int>m1;
        vector<int>m2;
        int i,j,k;
    	for(i=0; i<n; i++)
    	{
    	    l.push_back(arr[i]);
    	}
    	sort(l.begin(),l.end());
    	for(i=0; i<(n/2); i++)
    	{
    	    m1.push_back(l[i]);
    	}
    	for(i=n/2; i<n; i++)
    	{
    	    m2.push_back(l[i]);
    	}
    	reverse(m2.begin(),m2.end());
    	i=0,j=0,k=0;
    	while(i<m1.size() && j<m2.size())
    	{
    	    if(k%2==0)
    	    {
    	        arr[k]=m2[j];
    	        k++;
    	        j++;
    	    }
    	    else
    	    {
    	        arr[k]=m1[i];
    	        k++;
    	        i++;
    	    }
    	}
    	while(i<m1.size())
    	{
    	    arr[k]=m1[i];
    	    k++;
    	    i++;
    	}
    	while(j<m2.size())
    	{
    	    arr[k]=m2[j];
    	    k++;
    	    j++;
    	}
    }
};

//{ Driver Code Starts.

// Driver program to test above function 
int main() 
{
    int t;
    
    //testcases
    cin >> t;
    
    while(t--){
        
        //size of array
        int n;
        cin >> n;
        
        long long arr[n];
        
        //adding elements to the array
        for(int i = 0;i<n;i++){
            cin >> arr[i];
        }
        
        Solution ob;
        
        //calling rearrange() function
        ob.rearrange(arr, n);
        
        //printing the elements
        for (int i = 0; i < n; i++) 
		    cout << arr[i] << " ";
		
		cout << endl;
    }
	return 0; 
} 

// } Driver Code Ends