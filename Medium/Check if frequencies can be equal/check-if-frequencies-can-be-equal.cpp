//{ Driver Code Starts
#include <bits/stdc++.h>
using namespace std;


// } Driver Code Ends
//User function template for C++
class Solution{
public:	
	bool sameFreq(string s)
	{
	    set<int>st;
	    map<char,int>mp;
	    map<int,int>count_mp;
	    for(auto i:s)
	    {
	        mp[i]++;
	    }
	    for(auto i:mp)
	    {
	        st.insert(i.second);
	        count_mp[i.second]++;
	    }
	    if(st.size()==1)
	    {
	        return 1;
	    }
	    if(st.size()==2)
	    {
	        vector<int>values;
	        vector<int>counts;
	        for(auto i:count_mp)
	        {
	            values.push_back(i.first);
	            counts.push_back(i.second);
	        }
	        if(counts[0]==1 and values[0]==1)
	        {
	           return 1;
	        }
	        if(values[1]-values[0]==1)
	        {
	            if(counts[1]==1)
	            {
	                return 1;
	            }
	            else
	            {
	                return 0;
	            }
	        }
	    }
	    return 0;
	}
};

//{ Driver Code Starts.
int main(){
    int t;
    cin>>t;
    while(t--)
    {
        string s;
        cin>>s;
        Solution ob;
        cout<<ob.sameFreq(s)<<endl;
    }
}



// } Driver Code Ends