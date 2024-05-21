//{ Driver Code Starts
// Initial template for C++

#include <bits/stdc++.h>
using namespace std;


// } Driver Code Ends
// User function template for C++

class Solution {
  public:
    vector<int> printKClosest(vector<int> arr, int n, int k, int x) 
    {
        unordered_map<int,int>mp;
        vector<int>res2;
        for(auto i:arr)
        {
            int a=i-x;
            if(a!=0)
            {
                mp[a]++;
                res2.push_back(abs(a));
            }
        }
        vector<int>final;
        sort(res2.begin(),res2.end());
        int c=1;
        for(auto i:res2)
        {
            if(c>k)
            {
                break;
            }
            else
            {
                int b=-1*i;
                if(mp.find(i)!=mp.end())
                {
                    final.push_back((x+i));
                    mp.erase(i);
                }
                else if(mp.find(b)!=mp.end())
                {
                    final.push_back((x+b));
                    mp.erase(b);
                }
            }
            c++;
        }
        return final;
    }
};

//{ Driver Code Starts.

int main() {
    int t;
    cin >> t;
    while (t--) {
        int n, k, x;
        cin >> n;
        vector<int> arr(n);
        for (int i = 0; i < n; i++) {
            cin >> arr[i];
        }
        cin >> k >> x;
        Solution ob;
        auto ans = ob.printKClosest(arr, n, k, x);
        for (auto e : ans) {
            cout << e << " ";
        }
        cout << "\n";
    }
    return 0;
}

// } Driver Code Ends