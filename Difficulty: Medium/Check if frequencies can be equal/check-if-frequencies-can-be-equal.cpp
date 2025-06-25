class Solution {
  public:
    bool sameFreq(string& s) {
        unordered_map<char,int>mp;
        unordered_map<int,int>res;
        for(auto i:s) {
            mp[i]++;
        }
        for(auto i:mp) {
            res[i.second]++;
        }
        if(res.size()==1) {
            return true;
        }
        else if(res.size()==2) {
            auto i=res.begin();
            int a1=i->first,a2=i->second;
            i++;
            int b1=i->first,b2=i->second;
            if((a1==1 and a2==1) or (b1==1 and b2==1)) {
                return true;
            }
            if(abs(a1-b1)==1) {
                if((a1>b1 and a2==1) or (b1>a1 and b2==1)) {
                    return true;
                }
            }
        }
        return false;
    }
};
