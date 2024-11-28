//{ Driver Code Starts
#include <bits/stdc++.h>
using namespace std;


// } Driver Code Ends
class Solution {
  public:
    int myAtoi(char *s) {
        int sign=1,i=0;
        long long int ans=0;
        while(s[i]==' ') {
            i++;
        }
        if(s[i]=='-') {
            sign=-1;
            i++;
        }
        while(s[i]>='0' and s[i]<='9') {
            int val=s[i]-'0';
            ans=ans*10+val;
            if(sign==1 and ans >= INT_MAX) {
                return INT_MAX;
            }
            if(sign==-1 and -1*ans <= INT_MIN) {
                return INT_MIN;
            }
            i++;
        }
        return static_cast<int>(sign*ans);
    }
};

//{ Driver Code Starts.
int main() {
    int t;
    cin >> t;
    while (t--) {
        char s[20];
        cin >> s;
        Solution ob;
        int ans = ob.myAtoi(s);
        cout << ans << endl;
        cout << "~" << endl;
    }
}
// } Driver Code Ends