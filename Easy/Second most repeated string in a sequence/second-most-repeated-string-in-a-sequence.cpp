//{ Driver Code Starts
#include<bits/stdc++.h>
using namespace std;

// } Driver Code Ends

class Solution
{
  public:
    string secFrequent (string arr[], int n)
    {
        unordered_map<string,int>mp;
        priority_queue<pair<int,string>>pq;
        int i,x;
        for(i=0; i<n; i++)
        {
            mp[arr[i]]++;
        }
        for(auto i:mp)
        {
            pq.push({i.second,i.first});
        }
        for(i=0; i<1; i++)
        {
            x=pq.top().first;
            pq.pop();
        }
        while(!pq.empty())
        {
            if(pq.top().first != x)
            {
                return pq.top().second;
            }
        }
        return "";
    }
};

//{ Driver Code Starts.
int main()
{
    int t; cin >> t;
    while (t--)
    {
        int n; cin >> n;
        string arr[n];
        for (int i = 0; i < n; ++i)
            cin >> arr[i];
        Solution ob;
        cout << ob.secFrequent (arr, n) << endl;
    }
}
// Contributed By: Pranay Bansal

// } Driver Code Ends