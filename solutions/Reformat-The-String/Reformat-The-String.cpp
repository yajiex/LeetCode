class Solution {
public:
    string reformat(string s) {
        string ans = "";
        vector<char> vec1;
        vector<char> vec2;
        for(int i=0;i<s.length();i++) {
            if (isdigit(s[i])) {
                vec1.push_back(s[i]);
            } else {
                vec2.push_back(s[i]);
            }
        }
        
        int n = vec1.size();
        int m = vec2.size();
        if (abs(n-m) > 1) {
            return "";
        }
        
        int len = min(n, m);
        for(int i=0;i<len;i++) {
            ans += vec1[i];
            ans += vec2[i];
        }
        
        if (n > len) {
            ans += vec1[vec1.size() - 1];
        } else if (m > len) {
            ans = vec2[vec2.size() - 1] + ans;
        }
        
        return ans;
    }
};