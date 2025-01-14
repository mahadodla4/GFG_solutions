//{ Driver Code Starts
// Initial Template for C++
#include <bits/stdc++.h>
using namespace std;


// } Driver Code Ends
class Solution {
  public:
    // Function to find equilibrium point in the array.
    int findEquilibrium(vector<int> &a) {
        int n=a.size();
        int pref[n],suff[n],i;
        pref[0]=a[0];
        for(i=1; i<n; i++) {
            pref[i]=pref[i-1]+a[i];
        }
        suff[n-1]=a[n-1];
        for(i=n-2; i>=0; i--) {
            suff[i]=suff[i+1]+a[i];
        }
        for(i=0; i<n; i++) {
            if(pref[i]==suff[i]) {
                return i;
            }
        }
        return -1;
    }
};

//{ Driver Code Starts.

int main() {
    int t;
    cin >> t;
    cin.ignore(); // To discard any leftover newline characters
    while (t--)   // while testcases exist
    {
        vector<int> arr;
        string input;
        getline(cin, input); // Read the entire line for the array elements
        stringstream ss(input);
        int number;
        while (ss >> number) {
            arr.push_back(number);
        }

        Solution ob;
        cout << ob.findEquilibrium(arr) << endl;
        cout << "~" << endl;
    }
}
// } Driver Code Ends