class Solution {
public:
    bool isHappy(int n) {
        int slow = n;
        int fast = cal(cal(slow));
        while(slow != fast) {
            slow = cal(slow);
            fast = cal(cal(fast));
        }
        return slow == 1;
    }
private:
    int cal(int n) {
        int ans = 0;
        while(n != 0) {
            int digit = n % 10;
            ans += digit * digit;
            n /= 10;
        }
        return ans;
    }
};