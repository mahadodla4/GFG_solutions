//{ Driver Code Starts
#include <bits/stdc++.h>
using namespace std;


// } Driver Code Ends
class Solution {

  public:
    int findSwapValues(int a[], int n, int b[], int m) 
    {
        sort(a ,a+n);
        sort(b ,b+m);
        int sum_a = 0;
        for(int i =0;i<n;i++)
        {
            sum_a += a[i];
        }
        int sum_b = 0;
        for(int i =0;i<m;i++)
        {
            sum_b += b[i];
        }
        if(sum_a == sum_b)
        {
            return 1;
        }
        if((sum_a+sum_b)%2==1) 
        {
            return -1;
        }
        int avg=(sum_a + sum_b)/2;
        int diff = avg - min(sum_a,sum_b);
        for(int i=0; i<n; i++)
        {
            if(binary_search(b, b + m, (a[i]+diff))|| binary_search(b, b + m,(a[i]-diff)))
            {
                return 1;
            }
        }
        return -1;
    }
};

//{ Driver Code Starts.

int main() {

    int t;
    cin >> t;
    while (t--) {
        int n, m;
        cin >> n >> m;
        int a[n];
        int b[m];
        for (int i = 0; i < n; i++)
            cin >> a[i];
        for (int i = 0; i < m; i++)
            cin >> b[i];

        Solution ob;
        cout << ob.findSwapValues(a, n, b, m);
        cout << "\n";
    }
    return 0;
}

// } Driver Code Ends