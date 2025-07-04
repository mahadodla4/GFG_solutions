class Solution {
  public:
    int countAtMostK(vector<int> &arr, int k) {
        int l=0,n=arr.size(),res=0;
        unordered_map<int,int> mp;
        for(int i=0;i<n;i++)
        {
            mp[arr[i]]++;
            while(mp.size()>k)
            {
                if(mp[arr[l]]==1) mp.erase(arr[l]);
                else mp[arr[l]]--;
                l++;
            }
            res+=(i-l+1);
        }
        return res;
    }
};