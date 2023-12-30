//{ Driver Code Starts
#include <iostream>
#include <map>
#include <algorithm>
#include <cstdlib>
#include<bits/stdc++.h>

using namespace std;


// } Driver Code Ends
class Solution{
  public:
    vector<string> winner(string arr[],int n)
    {
        map<string,int>mp;
        vector<string>res;
        for(int i=0; i<n; i++)
        {
            mp[arr[i]]++;
        }
        int max=INT_MIN;
        string ans,count;
        for(auto i:mp)
        {
            if(i.second>max)
            {
                max=i.second;
                ans=i.first;
                count=to_string(max);
            }
        }
        res.push_back(ans);
        res.push_back(count);
        return res;
    }
};

//{ Driver Code Starts.

int main()
{
    int t;
    cin>>t;
    
    for(int i=0;i<t;i++)
    {
        
        
        int n;
        cin>>n;
        
        string arr[n];
        
        for (int i=0;i<n;i++)
        cin>>arr[i];
        Solution obj;
        vector<string> result = obj.winner(arr,n);
        
        cout<<result[0] << " " << result[1] << endl;
    }
    return 0;
}

// } Driver Code Ends