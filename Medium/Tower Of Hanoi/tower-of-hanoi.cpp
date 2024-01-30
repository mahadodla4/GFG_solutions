//{ Driver Code Starts
#include <bits/stdc++.h>

using namespace std;


// } Driver Code Ends
class Solution{
    public:
    long long cnt=0;
    void spoiler(int N,int from,int aux,int to)
    {
        if(N>0)
        {
            spoiler(N-1,from,to,aux);
            cout<<"move disk "<<N<<" from rod "<<from<<" to rod "<<to<<endl;
            cnt++;
            spoiler(N-1,aux,from,to);
        }
    }
    long long toh(int N, int from, int to, int aux) 
    {
        spoiler(N,from,aux,to);
        return cnt;
    }

};

//{ Driver Code Starts.

int main() {

    int T;
    cin >> T;//testcases
    while (T--) {
        
        int N;
        cin >> N;//taking input N
        
        //calling toh() function
        Solution ob;
        
        cout << ob.toh(N, 1, 3, 2) << endl;
    }
    return 0;
}



// } Driver Code Ends