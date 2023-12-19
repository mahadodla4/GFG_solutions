//{ Driver Code Starts
//Initial Template for C++

#include <bits/stdc++.h>
using namespace std;
 

// } Driver Code Ends
//User function Template for C++

class Solution
{
    public:
    string binary(int n)
    {
    	int i;
    	string res;
    	for(i=31; i>=0; i--)
    	{
    		res+=to_string(((n>>i)&1));
    	}
    	return res;
    }
    int posOfRightMostDiffBit(int m, int n)
    {
        if(m==n)
        {
            return -1;
        }
        string a=binary(m);
        string b=binary(n);
        for(int i=31; i>=0; i--)
        {
            if(a[i]!=b[i])
            {
                return 32-i;
            }
        }
        return -1;
    }
};

//{ Driver Code Starts.

// Driver Code
int main()
{   
    int t;
    cin>>t; //input number of testcases
    while(t--)
    {
         int m,n;
         cin>>m>>n; //input m and n
         Solution ob;
         cout << ob.posOfRightMostDiffBit(m, n)<<endl;
    }
    return 0;     
} 
// } Driver Code Ends