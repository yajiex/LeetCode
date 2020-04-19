/*
For the binary representation from right to left(until we find the leftmost 1):
if we meet 0, result += 1 because we are doing divide;
if we meet 1, result += 2 because we first do "-1" then do a divide;
ony exception is the leftmost 1, we just do a "-1" and it becomse 0 already.
*/
class Solution {
public:
    int numberOfSteps (int num) {
        int ans = 0;
        while(num) {
            ans += (num & 1) ? 2 : 1;
            num >>= 1;
        }
        return ans - 1;
    }
};