//{ Driver Code Starts
// Initial template for C++
#include <bits/stdc++.h>
using namespace std;


// } Driver Code Ends

class Solution {
  public:
    int pairsum(vector<int> &arr) 
    {
        int n=arr.size();
        sort(arr.begin(),arr.end());
        if(arr.size()==0) {
            return 0;
        }
        if(arr.size()==1) {
            return arr[0];
        }
        if(arr.size()==2) {
            return arr[0]+arr[1];
        }
        return arr[n-1]+arr[n-2];
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
        getline(cin, input);
        stringstream ss(input);
        int number;
        while (ss >> number) {
            arr.push_back(number);
        }
        int n = arr.size();
        Solution ob;
        int r = ob.pairsum(arr);
        cout << r << endl;
    }
    return 0;
}
// } Driver Code Ends