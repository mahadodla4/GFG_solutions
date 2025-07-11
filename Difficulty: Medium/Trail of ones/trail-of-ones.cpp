class Solution {
  public:
    int countConsec(int n) {
        if(n<2) {
            return 0;
        }
        int a=2, b=3;
        for(int i=3; i<=n; i++) {
            int tmp = a+b;
            a = b;
            b = tmp;
        }
        int total = pow(2,n);
        return total - b;
    }
};




