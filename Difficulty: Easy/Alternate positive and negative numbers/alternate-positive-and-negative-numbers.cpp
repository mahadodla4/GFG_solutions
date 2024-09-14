//{ Driver Code Starts
#include <bits/stdc++.h>

using namespace std;


// } Driver Code Ends
// User function template for C++
class Solution {
  public:
    void rearrange(vector<int> &arr) 
    {
        int i,j,k;
	    vector<int>l;
	    vector<int>m;
	    int n=arr.size();
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
    cin.ignore();
    while (t--) {
        vector<int> arr;
        string input;
        int num;

        getline(cin, input);
        stringstream s2(input);
        while (s2 >> num) {
            arr.push_back(num);
        }
        Solution ob;
        ob.rearrange(arr);
        for (int i = 0; i < arr.size(); i++) {
            cout << arr[i] << " ";
        }
        cout << "\n";
    }
    return 0;
}

// } Driver Code Ends