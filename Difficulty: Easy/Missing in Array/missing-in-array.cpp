class Solution {
  public:
    int missingNum(vector<int>& arr) {
        int n=arr.size()+1;
        vector<int> freq(n+1,0);
        for(int i=0;i<arr.size(); i++) {
            freq [arr[i]] ++ ;
        }
        for(int i=1;i<=n+1; i++) {
            if(freq [i]== 0)
                return i;
        }
    
    }
};