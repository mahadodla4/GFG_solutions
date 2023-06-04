//{ Driver Code Starts
#include <bits/stdc++.h>

using namespace std;

// } Driver Code Ends
//User function template for C++
class Solution{
public:

	void rearrange(int arr[], int n) 
	{
	    int i,j,k;
	    vector<int>l;
	    vector<int>m;
	    for(i=0 ;i<n; i++)
	    {
	        if(arr[i]>=0)
	        {
	            l.push_back(arr[i]);
	        }
	        if(arr[i]<0)
	        {
	            m.push_back(arr[i]);
	        }
	    }
	    i=0,j=0,k=0;
	    while(i<l.size() && j<m.size())
	    {
	        if(k%2==0)
	        {
	            arr[k]=l[i];
	            i++;
	            k++;
	        }
	        else
	        {
	            arr[k]=m[j];
	            j++;
	            k++;
	        }
	    }
	    while(i<l.size())
	    {
	        arr[k]=l[i];
	        i++;
	        k++;
	    }
	    while(j<m.size())
	    {
	        arr[k]=m[j];
	        k++;
	        j++;
	    }
	}
};

//{ Driver Code Starts.

int main() {
    int t;
    cin >> t;
    while (t--) {
        int n, i;
        cin >> n;
        int arr[n];
        for (i = 0; i < n; i++) {
            cin >> arr[i];
        }
        Solution ob;
        ob.rearrange(arr, n);
        for (i = 0; i < n; i++) {
            cout << arr[i] << " ";
        }
        cout << "\n";
    }
    return 0;
}

// } Driver Code Ends