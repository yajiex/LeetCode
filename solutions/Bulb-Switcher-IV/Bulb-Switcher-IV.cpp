class Solution {
public:
    int minFlips(string target) {
        int ans = 0;
        char last = '0';
        for(int i=0;i<target.size();i++) {
            if(target[i] != last) {
                ans++;
                last = target[i];
            }
        }
        return ans;
    }
};