//{ Driver Code Starts
#include <bits/stdc++.h>
using namespace std;

class Matrix {
  public:
    template <class T>
    static void input(vector<vector<T>> &A, int n, int m) {
        for (int i = 0; i < n; i++) {
            for (int j = 0; j < m; j++) {
                scanf("%d ", &A[i][j]);
            }
        }
    }

    template <class T>
    static void print(vector<vector<T>> &A) {
        for (int i = 0; i < A.size(); i++) {
            for (int j = 0; j < A[i].size(); j++) {
                cout << A[i][j] << " ";
            }
            cout << endl;
        }
    }
};


// } Driver Code Ends

class Solution {
  public:
    vector<int>adj[10005];
    void dfs(int node,vector<int>&l,vector<bool>&visited)
    {
        visited[node]=1;
        l.push_back(node);
        for(auto i:adj[node])
        {
            if(!visited[i])
            {
                dfs(i,l,visited);
            }
        }
    }
    int findNumberOfGoodComponent(int e, int v, vector<vector<int>> &edges) 
    {
        for(auto i:edges)
        {
            int u=i[0],v=i[1];
            adj[u].push_back(v);
            adj[v].push_back(u);
        }
        vector<vector<int>>res;
        vector<bool>visited(v+1,0);
        int i,ans=0;
        for(i=1; i<=v; i++)
        {
            if(!visited[i])
            {
                vector<int>l;
                dfs(i,l,visited);
                res.push_back(l);
            }
        }
        for(auto i:res)
        {
            int n=i.size(),c=0;
            for(auto j:i)
            {
                int b=adj[j].size();
                if(b==n-1)
                {
                    c++;
                }
            }
            if(c==n)
            {
                ans++;
            }
        }
        return ans;
        
    }
};

//{ Driver Code Starts.

int main() {
    int t;
    scanf("%d ", &t);
    while (t--) {

        int e;
        scanf("%d", &e);

        int v;
        scanf("%d", &v);

        vector<vector<int>> edges(e, vector<int>(2));
        Matrix::input(edges, e, 2);

        Solution obj;
        int res = obj.findNumberOfGoodComponent(e, v, edges);

        cout << res << endl;
    }
}

// } Driver Code Ends