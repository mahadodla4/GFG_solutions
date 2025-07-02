class Solution {
  public:
    int totalElements(vector<int> &arr) {
        int i,n=arr.size(),j=0;
        int res=INT_MIN;
        unordered_map<int,int>mp;
        for(i=0; i<n; i++) {
            mp[arr[i]]++;
            while(mp.size()>2) {
                mp[arr[j]]--;
                if(mp[arr[j]]==0) {
                    mp.erase(arr[j]);
                }
                j++;
            }
            res=max(res,i-j+1);
        }
        return res;
    }
};