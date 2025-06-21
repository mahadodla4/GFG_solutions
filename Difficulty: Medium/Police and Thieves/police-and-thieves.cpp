class Solution {
  public:
    int catchThieves(vector<char> &arr, int k) {
        int i=0,j=0,n=arr.size(),res=0;
        while(i<n and j<n) {
            while(i<n and arr[i]!='P') {
                i++;
            }
            while(j<n and arr[j]!='T') {
                j++;
            }
            if(i<n and j<n and abs(i-j)<=k) {
                res++;
                i++;
                j++;
            } else if(j<n and j<i) {
                j++;
            } else if(i<n and i<j) {
                i++;
            }
        }
        return res;
    }
};