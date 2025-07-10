class Solution {
  public:
    bool check(string & s, unordered_set<string>& st){
        int n= s.length();
        string temp="";
        for(int i=0; i<n; i++) {
            temp+= s[i];
            if(st.find(temp)== st.end()) {
                return false;
            }
        }
        return true;
    }
    string longestString(vector<string> &arr) {
        int n= arr.size();
        unordered_set<string>st;
        for(int i=0;i<n;i++) {
            st.insert(arr[i]);
        }
        
        string ans ="";
        sort(arr.begin(), arr.end());
        for(int i=0;i<n;i++) {
            string s= arr[i];
            if(check(s,st) && s.length()>ans.length()) {
                ans= s;
            }
        }
        
        return ans;
    }
};