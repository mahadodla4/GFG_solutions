class Solution {
  public:
    vector<int> nextLargerElement(vector<int> &arr) {
        int i,j,n=arr.size();
        vector<int>res(n,-1);
        stack<int>st;
        for(i=0; i<n; i++) {
            arr.push_back(arr[i]);
        }
        for(i=arr.size()-1; i>=0; i--) {
            while(!st.empty() and st.top()<=arr[i]) {
                st.pop();
            }
            if(!st.empty() and i<n) {
                res[i]=st.top();
            }
            st.push(arr[i]);
        }
        return res;
    }
};


