//{ Driver Code Starts
#include <bits/stdc++.h>
using namespace std;


// } Driver Code Ends

class Solution {
  public:
    string oddEven(string s) 
    {
        map<int,int>mp;
        for(auto i:s)
        {
            mp[i-'a'+1]++;
        }
        int even=0,odd=0;
        for(auto i:mp)
        {
            int a=i.first;
            int b=i.second;
            if(b%2==0 and a%2==0)
            {
                even++;
            }
            if(b%2!=0 and a%2!=0)
            {
                odd++;
            }
        }
        if((even+odd)%2==0)
        {
            return "EVEN";
        }
        return "ODD";
    } 
};


//{ Driver Code Starts.

int main() {
    int t;
    scanf("%d ", &t);
    while (t--) {

        string s;
        getline(cin, s);

        Solution obj;
        string res = obj.oddEven(s);

        cout << res << "\n";
    }
}

// } Driver Code Ends