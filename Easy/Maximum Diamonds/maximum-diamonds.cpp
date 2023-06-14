//{ Driver Code Starts

#include <bits/stdc++.h>
using namespace std;

// } Driver Code Ends

class Solution {
  public:
    long long maxDiamonds(int arr[], int n, int K) 
    {
        long long i,sum=0;
        priority_queue<int>pq(arr,arr+n);
        vector<int>l;
        while(K--)
        {
            int a=pq.top();
            l.push_back(a);
            pq.pop();
            pq.push(a/2);
        }
        for(auto i:l)
        {
            sum+=i;
        }
        return sum;
    }
};

//{ Driver Code Starts.
int main() {
    int t;
    cin >> t;
    while (t--) {
        int N,K;
        
        cin>>N>>K;
        int A[N];
        
        for(int i=0; i<N; i++)
            cin>>A[i];

        Solution ob;
        cout << ob.maxDiamonds(A,N,K) << endl;
    }
    return 0;
}
// } Driver Code Ends