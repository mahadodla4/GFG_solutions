//{ Driver Code Starts
#include <bits/stdc++.h>
using namespace std;

// } Driver Code Ends
class Solution {
  public:
    int findPosition(int N) 
    {
        int i,a;
        vector<int>l;
        for(i=0; i<32; i++)
        {
            if(N&(1<<i))
            {
                l.push_back(i+1);
            }
        }
        if(l.size()==1)
        {
            a=l[0];
            return a;
        }
        return -1;
    }
};

//{ Driver Code Starts.
int main() {
    int t;
    cin >> t;
    while (t--) {
        int N;

        cin>>N;

        Solution ob;
        cout << ob.findPosition(N) << endl;
    }
    return 0;
}
// } Driver Code Ends