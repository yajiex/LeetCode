class Solution {
public:
    string makeGood(string s) {
        for(int i=0;i<s.length()-1;) {
            if(s[i] + ('A' - 'a') == s[i+1] || s[i+1] + ('A' - 'a') == s[i]) {
                if(s.length() == 2) {
                    return "";
                }
                s.erase(i, 2);
                i=0;
            } else {
                i++;
            }
        }
        return s;
    }
};