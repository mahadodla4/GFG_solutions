//{ Driver Code Starts
#include <bits/stdc++.h>
using namespace std;

// } Driver Code Ends
class Solution {
  public:
    bool DFS(int node,vector<int>adj[],vector<int>&visited,vector<int>&dfsvisited)
    {
        visited[node]=1;
        dfsvisited[node]=1;
        for(auto i:adj[node])
        {
            if(!visited[i])
            {
                if(DFS(i,adj,visited,dfsvisited)==true)
                {
                    return true;
                }
            }
            else if(visited[i]==true and dfsvisited[i]==true)
            {
                return true;
            }
        }
        dfsvisited[node]=0;
        return false;
    }
    bool isCyclic(int V, vector<int> adj[]) 
    {
       vector<int>visited(V,0);
       vector<int>dfsvisited(V,0);
       for(int i=0; i<V; i++)
       {
           if(!visited[i])
           {
               if(DFS(i,adj,visited,dfsvisited)==true)
               {
                   return true;
               }
           }
       }
       return false;
    }
};

//{ Driver Code Starts.

int main() {

    int t;
    cin >> t;
    while (t--) {
        int V, E;
        cin >> V >> E;

        vector<int> adj[V];

        for (int i = 0; i < E; i++) {
            int u, v;
            cin >> u >> v;
            adj[u].push_back(v);
        }

        Solution obj;
        cout << obj.isCyclic(V, adj) << "\n";
    }

    return 0;
}

// } Driver Code Ends