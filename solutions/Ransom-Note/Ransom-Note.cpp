class Solution {
public:
    bool canConstruct(string ransomNote, string magazine) {
        vector<int> cnt(26, 0);
        for(int i=0;i<magazine.length();i++) {
            cnt[magazine[i] - 'a']++;
        }
        for(int i=0;i<ransomNote.length();i++) {
            if(cnt[ransomNote[i] - 'a'] == 0) {
                return false;
            }
            cnt[ransomNote[i] - 'a']--;
        }
        return true;
    }
};