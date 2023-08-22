//{ Driver Code Starts
#include <bits/stdc++.h>
using namespace std;

// } Driver Code Ends


class Solution
{
    public:
    //Function to find minimum number of operations that are required 
    //to make the matrix beautiful.
    int max_row_sum(vector<vector<int>> &mat)
    {
        int sum=0,max=INT_MIN,i,j;
        for(i=0; i<mat.size(); i++)
        {
            sum=0;
            for(j=0; j<mat[i].size(); j++)
            {
                sum+=mat[i][j];
            }
            if(sum > max)
            {
                max=sum;
            }
        }
        return max;
    }
    int max_col_sum(vector<vector<int>> &mat)
    {
        int sum=0,max=INT_MIN,i,j;
        for(i=0; i<mat.size(); i++)
        {
            sum=0;
            for(j=0; j<mat[i].size(); j++)
            {
                sum+=mat[j][i];
            }
            if(sum > max)
            {
                max=sum;
            }
        }
        return max;
    }
    int findMinOpeartion(vector<vector<int> > matrix, int n)
    {
        int i,j,sum=0,ans,res=0,rmaxi,cmaxi,m=INT_MIN,m1,m2;
        rmaxi=max_row_sum(matrix);
        cmaxi=max_col_sum(matrix);
        m1=max(rmaxi,cmaxi);
        m2=max(m,m1);
        for(i=0; i<matrix.size(); i++)
        {
            sum=0;
            for(j=0; j<matrix[i].size(); j++)
            {
                sum+=matrix[i][j];
            }
            ans=m2-sum;
            res+=ans;
        }
        return res;
    } 
};

//{ Driver Code Starts.
int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        int n;
        cin>>n;
        vector<vector<int> > matrix (n,vector<int>(n));
        for(int i=0;i<n;i++)
            for(int j=0;j<n;j++)
                cin>>matrix[i][j];
        Solution ob;
        cout << ob.findMinOpeartion(matrix, n) << endl;
    }
    return 0;
}


// } Driver Code Ends