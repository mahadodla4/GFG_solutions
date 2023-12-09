//{ Driver Code Starts

#include <bits/stdc++.h>
using namespace std;

// } Driver Code Ends

class Solution {
  public:
    bool prime(int p)
    {
        if(p==1)
        {
            return 0;
        }
        for(int i=2; i<=sqrt(p); i++)
        {
            if(p%i==0)
            {
                return 0;
            }
        }
        return 1;
    }
    int digitsum(int m)
    {
        int r,sum=0;
        while(m!=0)
        {
            r=m%10;
            sum+=r;
            m=m/10;
        }
        return sum;
    }
    int sum_factors(int n)
    {
        int i=1;
        int sum=0;
        while(n>1)
        {
            i++;
            if(!prime(i))
            {
                continue;
            }
            while(n%i==0)
            {
                sum+=digitsum(i);
                n=n/i;
            }
        }
        return sum;
    }
    int smithNum(int n) 
    {
        if(prime(n))
        {
            return 0;
        }
        int res1=digitsum(n);
        int res2=sum_factors(n);
        if(res1==res2)
        {
            return 1;
        }
        return 0;
    }
};

//{ Driver Code Starts.
int main() {
    int t;
    cin >> t;
    while (t--) {
        int n;
        
        cin>>n;

        Solution ob;
        cout << ob.smithNum(n) << endl;
    }
    return 0;
}
// } Driver Code Ends