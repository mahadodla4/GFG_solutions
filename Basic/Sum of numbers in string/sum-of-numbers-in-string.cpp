//{ Driver Code Starts
// C++ program to calculate sum of all numbers present
// in a string containing alphanumeric characters
#include <iostream>
using namespace std;


// } Driver Code Ends


class Solution
{
    public:
    //Function to calculate sum of all numbers present in a string.
    int findSum(string str)
    {
    	 int sum=0;
        int n=str.length();
        string temp="";
        int i=0;
        while(i<n)
        {
           if(!isdigit(str[i]))
           {
               i++;
               continue;
           }
           while(isdigit(str[i]))
           {
               temp=temp+str[i];
               i++;
           }
           int v=stoi(temp);
           temp="";
           sum+=v;
        }
        return sum;
    	
    }
};

//{ Driver Code Starts.

// Driver code
int main()
{
	// input alphanumeric string
	int t;
	cin>>t;
	while(t--)
	{
	    string str;
	    cin>>str;
	    Solution obj;
	    cout << obj.findSum(str);
        cout<<endl;
	}
	return 0;
}

// } Driver Code Ends