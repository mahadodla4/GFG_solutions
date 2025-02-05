//{ Driver Code Starts
#include <bits/stdc++.h>
using namespace std;


// } Driver Code Ends
class Solution {
  public:
    vector<int> intersectionWithDuplicates(vector<int>& a, vector<int>& b) {
        vector<int>values;
        set<int>res;
        unordered_map<int,int>mp1,mp2;
        for(auto i:a) {
            mp1[i]++;
        }
        for(auto i:b) {
            mp2[i]++;
        }
        for(auto i:a) {
            if(mp2.find(i)!=mp2.end()) {
                res.insert(i);
            }
        }
        for(auto i:b) {
            if(mp1.find(i)!=mp1.end()) {
                res.insert(i);
            }
        }
        for(auto i:res) {
            values.push_back(i);
        }
        return values;
    }
};

//{ Driver Code Starts.

int main() {
    int t;
    cin >> t;
    cin.ignore();
    while (t--) {
        vector<int> arr1, arr2;
        string input;

        // Read first array
        getline(cin, input);
        stringstream ss(input);
        int number;
        while (ss >> number) {
            arr1.push_back(number);
        }

        // Read second array
        getline(cin, input);
        stringstream ss2(input);
        while (ss2 >> number) {
            arr2.push_back(number);
        }

        Solution ob;
        vector<int> res = ob.intersectionWithDuplicates(arr1, arr2);
        sort(res.begin(), res.end());

        if (res.size() == 0) {
            cout << "[]" << endl;
        } else {
            for (auto it : res)
                cout << it << " ";
            cout << endl;
        }
        cout << "~" << endl;
    }
    return 0;
}
// } Driver Code Ends