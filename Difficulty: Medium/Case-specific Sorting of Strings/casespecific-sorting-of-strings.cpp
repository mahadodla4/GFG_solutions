class Solution {
  public:
    string caseSort(string& s) {
        vector<char>lower,upper;
        for(auto i:s) {
            if(islower(i)) {
                lower.push_back(i);
            }
            if(isupper(i)) {
                upper.push_back(i);
            }
        }
        sort(lower.begin(),lower.end());
        sort(upper.begin(),upper.end());
        
        int i=0,j=0,k=0,n=s.size();
        string res="";
        for(i=0; i<n; i++) {
            if(islower(s[i])) {
                s[i]=lower[j];
                j++;
            }
            else if(isupper(s[i])) {
                s[i]=upper[k];
                k++;
            }
        }
        return s;
    }
};
