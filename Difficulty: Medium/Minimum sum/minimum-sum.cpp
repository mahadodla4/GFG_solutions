//{ Driver Code Starts
#include <bits/stdc++.h>
using namespace std;


// } Driver Code Ends
// User function template for C++

class Solution {
  public:
    string minSum(vector<int> &arr) {
        long long n=arr.size();
        string final_value="",res1="",res2="";
        sort(arr.begin(),arr.end());
        for(int i=0; i<n; i++) {
            if(i%2==0) {
                res1+=to_string(arr[i]);
            }
            else {
                res2+=to_string(arr[i]);
            }
        }
        int carry=0;
        int i=res1.size()-1,j=res2.size()-1;
        while(i>=0 || j>=0 || carry>0) {
            int a=carry;
            if(i>=0) {
                a+=res1[i]-'0';
                i--;
            }
            if(j>=0) {
                a+=res2[j]-'0';
                j--;
            }
            final_value+=to_string(a%10);
            carry=a/10;
        }
        reverse(final_value.begin(),final_value.end());
        int k=0;
        while(final_value[k]=='0') {
            k++;
        }
        if(final_value[0]=='0') {
             return final_value.substr(k,final_value.length()-1);
        }
        return final_value;
    }
};


//{ Driver Code Starts.

int main() {
    int t;
    cin >> t;
    cin.ignore();
    while (t--) {
        vector<int> a;
        string input;
        getline(cin, input);
        stringstream ss(input);
        int number;
        while (ss >> number) {
            a.push_back(number);
        }

        Solution ob;
        string ans = ob.minSum(a);
        cout << ans << endl;
        cout << "~" << endl;
    }
    return 0;
}

// } Driver Code Ends