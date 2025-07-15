class Solution {
  public:
    bool divby13(string &s) {
        string temp;
        for(char c:s) {
            temp.push_back(c);
            int num = stoi(temp);
            num = num % 13;
            temp = to_string(num);
        }
        if(temp=="0") {
            return true;
        }
        return false;
    }
};