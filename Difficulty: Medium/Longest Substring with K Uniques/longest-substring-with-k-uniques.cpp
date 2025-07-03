class Solution {
  public:
    int longestKSubstr(string &arr, int k) {
        int i,n=arr.size(),j=0;
        int res=INT_MIN;
        unordered_map<int,int>mp;
        for(i=0; i<n; i++) {
            mp[arr[i]]++;
            if(mp.size()==k) {
                res=max(res,i-j+1);
            }
            else if(mp.size()>k) {
                while(j<i and mp.size()>k) {
                    mp[arr[j]]--;
                    if(mp[arr[j]]==0) {
                        mp.erase(arr[j]);
                    }
                    j++;
                }
            }
        }
        return res>0 ? res:-1;
    }
};