//{ Driver Code Starts
// Initial template for C++

#include <bits/stdc++.h>
using namespace std;


// } Driver Code Ends
class Solution {
public:
    int dRow[8]={-1,-1,-1,0,1,1,1,0};
    int dCol[8]={-1,0,1,1,1,0,-1,-1};
    bool valid(vector<vector<int>>&vis,int r,int c,int n,int m)
    {
    	if(r<0 or r>=n or c<0 or c>=m)
    	{
    		return false;
    	}
    	if(vis[r][c]==1)
    	{
    		return false;
    	}
    	return true;
    }
    void dfs(int ind,stack<pair<int,int>>&st,vector<vector<char>>&board,string dic,vector<vector<int>>&vis,int n,int m,vector<string>&final,bool &f)
    {
        if(ind==dic.size())
        {
            final.push_back(dic);
            f=true;
            return;
        }
        while(!st.empty())
        {
            int a=st.top().first;
            int b=st.top().second;
            st.pop();
            for(int i=0; i<8; i++)
            {
                int adjx=a+dRow[i];
                int adjy=b+dCol[i];
                if(valid(vis,adjx,adjy,n,m) and board[adjx][adjy]==dic[ind])
                {
                    st.push({adjx,adjy});
                    vis[adjx][adjy]=1;
                    dfs(ind+1,st,board,dic,vis,n,m,final,f);
                    vis[adjx][adjy]=0;
                }
                if(f){
                return;
            }
            }
        }
    }
	vector<string> wordBoggle(vector<vector<char> >& board, vector<string>& dict) 
	{
	    int n=board.size();
	    int m=board[0].size();
	    int i,j,k;
	    vector<string>final;
	    for(i=0; i<dict.size(); i++)
	    {
	        vector<vector<int>>vis(51,vector<int>(51,0));
	        stack<pair<int,int>>st;
	        bool f=false;
	        int f1=0;
	        for(j=0; j<n; j++)
	        {
	            for(k=0; k<m; k++)
	            {
	                if(board[j][k]==dict[i][0])
	                {
	                    st.push({j,k});
	                    vis[j][k]=1;
	                    dfs(1,st,board,dict[i],vis,n,m,final,f);
	                    if(f)
    	                {
    	                    f1=1;
    	                    break;
    	                }
	                    vis[j][k]=0;
	                }
	  
	            }
	            if(f1)
	            {
	                break;
	            }
	        }
	    }
	    sort(final.begin(),final.end());
	    return final;
	}

};





//{ Driver Code Starts.

int main() {
    int t;
    cin >> t;
    while (t--) {
        int N;
        cin >> N;
        vector<string> dictionary;
        for (int i = 0; i < N; ++i) {
            string s;
            cin >> s;
            dictionary.push_back(s);
        }
        
        int R, C;
        cin >> R >> C;
        vector<vector<char> > board(R);
        for (int i = 0; i < R; i++) {
            board[i].resize(C);
            for (int j = 0; j < C; j++) cin >> board[i][j];
        }
        Solution obj;
        vector<string> output = obj.wordBoggle(board, dictionary);
        if (output.size() == 0)
            cout << "-1";
        else {
            sort(output.begin(), output.end());
            for (int i = 0; i < output.size(); i++) cout << output[i] << " ";
        }
        cout << endl;
    }
}

// } Driver Code Ends