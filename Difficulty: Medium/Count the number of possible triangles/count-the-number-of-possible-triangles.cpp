//{ Driver Code Starts
#include <bits/stdc++.h>
using namespace std;


// } Driver Code Ends
class Solution {
  public:
    // Function to count the number of possible triangles.
    int countTriangles(vector<int>& arr) {
        sort(arr.begin(),arr.end());
        int c=0,n=arr.size(),i,j;
        for(i=0; i<n-2; i++) {
            for(j=i+1; j<n-1; j++) {
                int k=j+1;
                while(k<n and (arr[i]+arr[j])>arr[k]) {
                    c++;
                    k++;
                }
            }
        }
        return c;
    }
};


//{ Driver Code Starts.

int main() {
    int t;
    cin >> t;
    cin.ignore(); // To ignore the newline after the integer input
    while (t--) {
        int n;
        vector<int> a;
        string input;

        // Input format: first number n followed by the array elements
        getline(cin, input);
        stringstream ss(input);
        int num;
        while (ss >> num)
            a.push_back(num);

        Solution obj;
        cout << obj.countTriangles(a) << "\n~\n";
    }

    return 0;
}

// } Driver Code Ends