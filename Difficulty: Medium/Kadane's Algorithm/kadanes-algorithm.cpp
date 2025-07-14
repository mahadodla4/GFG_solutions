class Solution {
  public:
    int maxSubarraySum(vector<int> &arr) {
        int c=INT_MIN,sum=0,n=arr.size();
        for(int i=0;i<n;i++)
        {
            sum+=arr[i];
            c=max(c,sum);
            if(sum<0) {
                sum=0;
            }
        }
        return c;
    }
};