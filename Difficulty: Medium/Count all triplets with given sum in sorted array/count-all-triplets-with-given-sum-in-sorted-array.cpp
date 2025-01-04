//{ Driver Code Starts
#include <bits/stdc++.h>
using namespace std;


// } Driver Code Ends
class Solution {
  public:
    int countTriplets(vector<int> &arr, int target) {
        unordered_map<int,int>mp;
        int i,j,n=arr.size(),c=0;
        mp[arr[0]]++;
        for(i=1; i<n-1; i++) {
            for(j=i+1; j<n; j++) {
                int val=target-(arr[i]+arr[j]);
                if(mp.find(val)!=mp.end()) {
                    c+=mp[val];
                }
            }
            mp[arr[i]]++;
        }
        return c;
    }
};

//{ Driver Code Starts.

vector<int> lineArray() {
    string line;
    getline(cin, line);
    stringstream ss(line);
    vector<int> arr;
    int num;
    while (ss >> num) {
        arr.push_back(num);
    }
    return arr;
}

int main() {
    int t;
    cin >> t;
    cin.ignore();
    while (t--) {
        vector<int> arr = lineArray();
        int target;
        cin >> target;
        cin.ignore();

        Solution ob;
        int res = ob.countTriplets(arr, target);
        cout << res << endl;
        cout << "~" << endl;
    }
}

// } Driver Code Ends