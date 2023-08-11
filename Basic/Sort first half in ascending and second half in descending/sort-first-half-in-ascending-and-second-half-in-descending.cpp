//{ Driver Code Starts


#include <bits/stdc++.h>

using namespace std;


// } Driver Code Ends



class Solution{
  public:
    void customSort(int arr[], int n) 
    {
        int mid=n/2;
        sort(arr,arr+mid);
        sort(arr+mid,arr+n);
        reverse(arr+mid,arr+n);
        
    }
};

//{ Driver Code Starts.

int main() {
    int t;
    cin >> t;
    while (t--) {
        int n;
        cin >> n;
        int arr[n];
        for (int i = 0; i < n; i++) {
            cin >> arr[i];
        }
        Solution obj;
        obj.customSort(arr, n);
        for (int i = 0; i < n; i++) {
            cout << arr[i] << " ";
        }
        cout << "\n";
    }
    return 0;
}

// } Driver Code Ends