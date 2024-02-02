//{ Driver Code Starts
//Initial template for C++

#include <bits/stdc++.h>
using namespace std;

// } Driver Code Ends
//User function template for C++

class Solution{
  public:
    /*You are required to complete this method */
    int atoi(string s) 
    {
        int c1=1,c2=0,i;
        if(s[0]=='-')
        {
            for(i=1; i<s.size(); i++)
            {
                if(isdigit(s[i]))
                {
                    c1++;
                }
            }
        }
        else
        {
            for(auto i:s)
            {
                if(isdigit(i))
                {
                    c2++;
                }
            }
        }
        //cout<<c1<<" "<<c2<<endl;
        if(c1==s.size() or c2==s.size())
        {
            return stoi(s);
        }
        return -1;
    }
};

//{ Driver Code Starts.
int main()
{
	int t;
	cin>>t;
	while(t--)
	{
		string s;
		cin>>s;
		Solution ob;
		cout<<ob.atoi(s)<<endl;
	}
}
// } Driver Code Ends