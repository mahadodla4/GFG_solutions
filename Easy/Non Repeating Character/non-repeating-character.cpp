//{ Driver Code Starts
#include <bits/stdc++.h>
using namespace std;


// } Driver Code Ends

class Solution
{
    public:
    //Function to find the first non-repeating character in a string.
    char nonrepeatingCharacter(string S)
    {
        int i,j;
        map<char,int>mp;
        for(auto i:S)
        {
            mp[i]++;
        }
        int ind=INT_MAX;
        for(i=0; i<S.size(); i++)
        {
            if(mp[S[i]]==1 and S[i]<ind)
            {
                return S[i];
            }
        }
        
        return '$';
    }

};

//{ Driver Code Starts.

int main() {
	
	int T;
	cin >> T;
	
	while(T--)
	{
	
	    string S;
	    cin >> S;
	    Solution obj;
        char ans = obj.nonrepeatingCharacter(S);
        
        if(ans != '$')
	    cout << ans;
        else cout << "-1";
            
        cout << endl;
	    
	}
	
	return 0;
}

// } Driver Code Ends