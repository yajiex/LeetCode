class Solution {
public:
    string convertToBase7(int num) {
        return num/7 == 0 ? to_string(num) : convertToBase7(num/7) + to_string(abs(num)%7);
    }
};