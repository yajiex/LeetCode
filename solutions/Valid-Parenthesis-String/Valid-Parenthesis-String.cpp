/*
https://leetcode.com/problems/valid-parenthesis-string/discuss/302732/C%2B%2B-O(S)-Time-O(1)-Space-One-Pass-with-Explanation
Let diff be count of left parenthesis minus count of right parenthesis.

When we meet:

(, we increment diff.
), we decrement diff.
*, we have three choices which makes the diff become a range -- [diff - 1, diff + 1].
So we use maxDiff/minDiff to record the maximum/minimum diff we can get.

When we meet:

(, ++maxDiff and ++minDiff.
), --maxDiff and --minDiff.
*, ++maxDiff and --minDiff.
If maxDiff become negative, it means it's already invalid, we should return false.

Whenever minDiff falls below 0, we should force it to be 0 because we never accept negative diff during the process.

After scanning through string s, as long as minDiff is 0, this string can be a valid one.
*/
class Solution {
public:
    bool checkValidString(string s) {
        int maxDiff = 0;
        int minDiff = 0;
        for(int i=0;i<s.length();i++) {
            if (s[i] == '(' || s[i] == '*') {
                maxDiff += 1;
            } else {
                maxDiff -= 1;
            }
            
            if (s[i] == ')' || s[i] == '*') {
                minDiff -= 1;
            } else {
                minDiff += 1;
            }
            
            if (maxDiff < 0) {
                return false;
            }
            
            minDiff = max(0, minDiff);
        }
        
        return minDiff == 0;
    }
};