//{ Driver Code Starts
// Initial Template for C++

#include <bits/stdc++.h>
using namespace std;

// } Driver Code Ends
// User function Template for C++

class Solution{
public:
    int maxGold(int n, int m, vector<vector<int>> M)
    {
        int row,col,right,right_up,right_down,ans=0;
        vector<int>l;
        for(col=m-2; col>=0; col--)
        {
            for(row=0; row<n; row++)
            {
                right=M[row][col+1];
                if(row==0)
                {
                    right_up=0;
                }
                else
                {
                    right_up=M[row-1][col+1];
                }
                if(row==n-1)
                {
                    right_down=0;
                }
                else
                {
                    right_down=M[row+1][col+1];
                }
                ans=max(right,max(right_up,right_down));
                M[row][col]+=ans;
            }
        }
        for(int i=0; i<n; i++)
        {
            l.push_back(M[i][0]);
        }
        sort(l.rbegin(),l.rend());
        return l[0];
    }
};

//{ Driver Code Starts.

int main(){
    int t;
    cin>>t;
    while(t--){
        int n, m;
        cin>>n>>m;
        vector<vector<int>> M(n, vector<int>(m, 0));
        for(int i = 0;i < n;i++){
            for(int j = 0;j < m;j++)
                cin>>M[i][j];
        }
        
        Solution ob;
        cout<<ob.maxGold(n, m, M)<<"\n";
    }
    return 0;
}
// } Driver Code Ends