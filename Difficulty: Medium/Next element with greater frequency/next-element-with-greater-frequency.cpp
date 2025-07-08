class Solution {
  public:
    vector<int> findGreater(vector<int>& arr) {
        int i,n=arr.size();
        unordered_map<int,int>mp;
        vector<int>res(n);
        stack<pair<int,int>>st;
        for(auto i:arr) {
            mp[i]++;
        }
        for(i=n-1; i>=0; i--) {
            while(!st.empty() and mp[arr[i]]>=st.top().second) {
                st.pop();
            }
            if(st.empty()) {
                res[i]=-1;
            } else {
                res[i]=st.top().first;
            }
            st.push({arr[i],mp[arr[i]]});
        }
        return res;
    }
};


