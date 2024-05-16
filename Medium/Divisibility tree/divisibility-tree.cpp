//{ Driver Code Starts


#include<bits/stdc++.h>
using namespace std;

// } Driver Code Ends


class Solution {
public:
    int dfs(int node,vector<int>adj[],vector<int>&visited,int &res)
    {
        visited[node]=1;
        int sum=1;
        for(auto i:adj[node])
        {
            if(!visited[i])
            {
                sum+=dfs(i,adj,visited,res);
            }
        }
        if(node!=1 and sum%2==0)
        {
            res++;
        }
        return sum;
        
    }
	int minimumEdgeRemove(int n, vector<vector<int>>edges)
	{
	    vector<int>adj[n+1];
	    for(auto i:edges)
	    {
	        int u=i[0],v=i[1];
	        adj[u].push_back(v);
	        adj[v].push_back(u);
	    }
	    int res=0;
	    vector<int>visited(n+1,0);
	    dfs(1,adj,visited,res);
	    return res;
	}
};

//{ Driver Code Starts.
int main(){
	int tc;
	cin >> tc;
	while(tc--){
		int n;
		cin >> n;
		vector<vector<int>>edges;
		for(int i = 0; i < n-1; i++){
			int x, y;
			cin >> x >> y;
			edges.push_back({x,y});
		}
		Solution obj;
		int ans = obj.minimumEdgeRemove(n, edges);
		cout << ans <<"\n";
	}
	return 0;
}

// } Driver Code Ends