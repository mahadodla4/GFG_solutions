//{ Driver Code Starts
// Initial Template for C++

#include <bits/stdc++.h>
using namespace std;


// } Driver Code Ends
// User function Template for C++

class Solution {
public:
    void DFS(int node, vector<bool>& visited, vector<vector<int>>& adj) {
        visited[node] = true;
        for (auto v : adj[node]) {
            if (!visited[v])
                DFS(v, visited, adj);
        }
    }

    int isCircle(vector<string>& arr) {
        vector<int> inDeg(26, 0);
        vector<int> outDeg(26, 0);
        vector<vector<int>> adj(26);
        for(auto A : arr) 
        {
            int u = A[0]-'a';
            int v = A[A.size()-1]-'a';
            adj[u].push_back(v);
            inDeg[v]++;
            outDeg[u]++;
        }
        for (int i = 0; i < 26; i++) 
        {
            if(inDeg[i] != outDeg[i]){
                return false;
            }
        }
        vector<bool> visited(26, false);
        int node = arr[0][0] - 'a';
        DFS(node, visited, adj);
        for (int i = 0; i < 26; i++) {
            if (inDeg[i] && !visited[i])
                return false;
        }
        return true;
    }
};

//{ Driver Code Starts.
int main() {
    int t;
    cin >> t;
    while (t--) {
        int N;
        cin >> N;
        vector<string> A;
        string s;

        for (int i = 0; i < N; i++) {
            cin >> s;
            A.push_back(s);
        }

        Solution ob;
        cout << ob.isCircle(A) << endl;
    }
    return 0;
}
// } Driver Code Ends