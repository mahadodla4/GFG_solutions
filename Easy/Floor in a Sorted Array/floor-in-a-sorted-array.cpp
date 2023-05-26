//{ Driver Code Starts
#include <bits/stdc++.h>
using namespace std;


// } Driver Code Ends
class Solution{
  public:
    // Function to find floor of x
    // n: size of vector
    // x: element whose floor is to find
    int findFloor(vector<long long> v, long long n, long long x)
    {
        vector<int>res;
        int i,max;
        for(i=0; i<n; i++)
        {
            if(v[i]<=x)
            {
                res.push_back(v[i]);
            }
        }
        /*for(i=0; i<res.size(); i++)
        {
            cout<<res[i]<<" ";
        }
        cout<<endl;*/
        if(res.size()==0)
        {
            return -1;
        }
        sort(res.begin(),res.end());
        int c=res[res.size()-1];
        for(i=0; i<v.size(); i++)
        {
            if(v[i]==c)
            {
                return i;
            }
        }
        //return max;
    }
};


//{ Driver Code Starts.

int main() {
	
	long long t;
	cin >> t;
	
	while(t--){
	    long long n;
	    cin >> n;
	    long long x;
	    cin >> x;
	    
	    vector<long long> v;
	    
	    for(long long i = 0;i<n;i++){
	        long long temp;
	        cin >> temp;
	        v.push_back(temp);
	    }
	    Solution obj;
	    cout << obj.findFloor(v, n, x) << endl;
	   
	}
	
	return 0;
}
// } Driver Code Ends