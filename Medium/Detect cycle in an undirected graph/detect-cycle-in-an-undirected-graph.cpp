//{ Driver Code Starts
#include <bits/stdc++.h>
using namespace std;

// } Driver Code Ends
class Solution {
  public:
    bool cycle(int node,vector<bool>&visited,vector<int>adj[])
    {
        visited[node]=1;
        queue<pair<int,int>>q;
        q.push({node,-1});
        
        while(!q.empty())
        {
            int val=q.front().first;
            int parent=q.front().second;
            q.pop();
            for(auto i:adj[val])
            {
                if(!visited[i])
                {
                    visited[i]=1;
                    q.push({i,val});
                }
                else if(parent!=i)
                {
                    return 1;
                }
            }
        }
        return 0;
    }
    bool isCycle(int v, vector<int> adj[]) 
    {
        vector<bool>visited(v,0);
        for(int i=0; i<v; i++)
        {
            if(!visited[i])
            {
                if(cycle(i,visited,adj)==1)
                {
                    return 1;
                }
            }
        }
        return 0;
    }
};

//{ Driver Code Starts.
int main() {
    int tc;
    cin >> tc;
    while (tc--) {
        int V, E;
        cin >> V >> E;
        vector<int> adj[V];
        for (int i = 0; i < E; i++) {
            int u, v;
            cin >> u >> v;
            adj[u].push_back(v);
            adj[v].push_back(u);
        }
        Solution obj;
        bool ans = obj.isCycle(V, adj);
        if (ans)
            cout << "1\n";
        else
            cout << "0\n";
    }
    return 0;
}
// } Driver Code Ends