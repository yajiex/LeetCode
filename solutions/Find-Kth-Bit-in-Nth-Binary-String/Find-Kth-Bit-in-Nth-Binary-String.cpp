class Solution {
public:
    char findKthBit(int n, int k) {
        string s = "0";
        for(int i=2;i<=n;i++) {
            string r = "";
            for(int j=s.length()-1;j>=0;j--) {
                r += (s[j] == '0' ? '1' : '0');
            }
            s = s + "1" + r;
        }
        return s[k-1];
    }
};