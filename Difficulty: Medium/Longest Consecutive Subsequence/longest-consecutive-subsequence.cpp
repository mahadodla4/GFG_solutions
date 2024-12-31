//{ Driver Code Starts
#include <bits/stdc++.h>

using namespace std;


// } Driver Code Ends
class Solution {
  public:

    // Function to return length of longest subsequence of consecutive integers.
    int longestConsecutive(vector<int>& arr) {
        sort(arr.begin(),arr.end());
        int i,c=1,n=arr.size(),maxi=1;
        vector<int>l;
        for(i=1; i<n; i++) {
            if(arr[i]==arr[i-1]) {
                continue;
            }
            if(arr[i]-arr[i-1]==1) {
                c++;
            }
            else {
                maxi=max(maxi,c);
                c=1;
            }
            
        }
        maxi=max(maxi,c);
        return maxi;
    }
};

//{ Driver Code Starts.
int main() {
    int t;
    cin >> t;
    cin.ignore();
    while (t--) {
        vector<int> arr;
        string input;

        // Read first array
        getline(cin, input);
        stringstream ss(input);
        int number;
        while (ss >> number) {
            arr.push_back(number);
        }

        Solution ob;
        int res = ob.longestConsecutive(arr);

        cout << res << endl << "~" << endl;
    }
    return 0;
}

// } Driver Code Ends