//{ Driver Code Starts
// Initial Template for C++

#include <bits/stdc++.h>
using namespace std;


// } Driver Code Ends
// User function Template for C++

class Solution {
  public:
    int minimumMultiplications(vector<int>& arr, int start, int end) 
    {
        if(start==end)
        {
            return 0;
        }
        int mod=100000;
        vector<int>visited(100001,0);
        visited[start]=1;
        queue<int>q;
        q.push(start);
        int c=1;
        while(!q.empty())
        {
            int n=q.size();
            for(int i=0; i<n; i++)
            {
                int val=q.front();
                q.pop();
                for(auto j:arr)
                {
                    int ans=(val*j)%mod;
                    if(ans==end) return c;
                    if(visited[ans]==0)
                    {
                        visited[ans]=1;
                        q.push(ans);
                    }
                }
            }
            c++;
        }
        return -1;
    }
};


//{ Driver Code Starts.

int main() {

    int t;
    cin >> t;
    while (t--) {
        int n;
        cin >> n;
        vector<int> arr(n);
        for (int i = 0; i < n; i++) {
            cin >> arr[i];
        }
        int start, end;
        cin >> start >> end;
        Solution obj;
        cout << obj.minimumMultiplications(arr, start, end) << endl;
    }
}

// } Driver Code Ends