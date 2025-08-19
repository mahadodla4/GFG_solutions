class Solution {
  public:
    vector<int> farMin(vector<int>& arr) {
        int n=arr.size();
        vector<int>small(n);
        vector<int>res(n,-1);
        
        small[n-1]=arr[n-1];
        for(int i=n-2; i>=0; i--) {
            small[i]=min(arr[i],small[i+1]);
        }
        
        for(int i=0; i<n; i++) {
            int ind=lower_bound(small.begin()+i+1,small.end(),arr[i])-small.begin()-1;
            if(arr[ind] < arr[i] and ind!=i) {
                res[i]=ind;
            } else {
                res[i]=-1;
            }
        }
        return res;
    }
};

