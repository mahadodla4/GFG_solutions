//{ Driver Code Starts
#include <bits/stdc++.h>
using namespace std;

// } Driver Code Ends
class Solution{
    public:
    vector<pair<int,int>> allPairs(int A[], int B[], int N, int M, int X)
    {
        vector<pair<int,int>>res;
        unordered_map<int,int>mp1;
        unordered_map<int,int>mp2;
        int i;
        for(i=0; i<N; i++)
        {
            mp1[A[i]]++;
        }
        for(i=0; i<M; i++)
        {
            mp2[B[i]]++;
        }
        for(auto i:mp1)
        {
            int a=X-i.first;
            if(mp2.find(a)!=mp2.end())
            {
                res.push_back({i.first,a});
            }
        }
        sort(res.begin(),res.end());
        return res;
    }
};


//{ Driver Code Starts.
int main() {
	long long t;
	cin >> t;
	
	while(t--){
	    int N, M, X;
	    cin >> N >> M >> X;
        int A[N], B[M];
        
	    for(int i = 0;i<N;i++)
	        cin >> A[i];
	    for(int i = 0;i<M;i++)
	        cin >> B[i];
	        
	   Solution ob;
	   vector<pair<int,int>> vp = ob.allPairs(A, B, N, M, X);
	   int sz = vp.size();
        if(sz==0)
        cout<<-1<<endl;
        else{
            for(int i=0;i<sz;i++){
                if(i==0)
                cout<<vp[i].first<<" "<<vp[i].second;
                else
                cout<<", "<<vp[i].first<<" "<<vp[i].second;
            }
            cout<<endl;
        }
	}
	return 0;
}
// } Driver Code Ends