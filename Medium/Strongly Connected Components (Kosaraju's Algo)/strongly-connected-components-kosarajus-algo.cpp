//{ Driver Code Starts
#include<bits/stdc++.h>
using namespace std;

// } Driver Code Ends
class Solution
{
	public:
	void DFS(int node,vector<int> adj[],vector<bool>&visited,vector<int>&l)
    {
    	visited[node]=1;
    	
    	for(auto i:adj[node])
    	{
    		if(!visited[i])
    		{
    			DFS(i,adj,visited,l);
    		}
    	}
    	l.push_back(node);
    }
    int kosaraju(int V, vector<vector<int>>& adj)
    {
        vector<int> adj1[V];
        for(int i=0;i<V;i++){
            for(auto it:adj[i]){
                adj1[i].push_back(it);
            }
        }
        vector<bool>visited(V,false);
        vector<int>l;
        int i;
        for(i=0; i<V; i++)
    	{
    		if(!visited[i])
    		{
    			DFS(i,adj1,visited,l);
    		}
    	}
        reverse(l.begin(),l.end());
        fill(visited.begin(), visited.end(), false);
        vector<int> rev[V];
    	for(i=0; i<V; i++)
    	{
    	    for(auto j:adj[i])
    	    {
    	        rev[j].push_back(i);
    	    }
    	}
    	int c=0;
    	for(i=0; i<V; i++)
    	{
    	    if(!visited[l[i]])
    	    {
    	        c++;
    	        DFS(l[i],rev,visited,l);
    	    }
    	}
    	return c;
    }
};

//{ Driver Code Starts.


int main()
{
    
    int t;
    cin >> t;
    while(t--)
    {
    	int V, E;
    	cin >> V >> E;

    	vector<vector<int>> adj(V);

    	for(int i = 0; i < E; i++)
    	{
    		int u, v;
    		cin >> u >> v;
    		adj[u].push_back(v);
    	}

    	Solution obj;
    	cout << obj.kosaraju(V, adj) << "\n";
    }

    return 0;
}


// } Driver Code Ends