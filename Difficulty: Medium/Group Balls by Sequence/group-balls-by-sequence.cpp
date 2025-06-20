class Solution {
  public:
    bool validgroup(vector<int> &arr, int k) {
        int n=arr.size();
        if(n%k!=0) {
            return false;
        }
        sort(arr.begin(),arr.end());
        int i,c=1;
        for(i=1; i<n; i++) {
            if(arr[i] == arr[i-1]+1) {
                c++;
            } else if(arr[i] == arr[i-1]) {
                continue;
            } else {
                if(c%k) return false;
                c=1;
            }
        }
        return (c%k)==0;
    }
};
