// https://leetcode.com/problems/numbers-with-repeated-digits/discuss/256725/JavaPython-Count-the-Number-Without-Repeated-Digit
class Solution {
public:
    int numDupDigitsAtMostN(int N) {
        vector<int> vec;
        int num = N + 1;
        while(num) {
            int tmp = num % 10;
            vec.push_back(tmp);
            num /= 10;
        }
        std::reverse(vec.begin(), vec.end());
        int n = vec.size();
        int ans = 0;
        
        for(int i=1;i<n;i++) {
            ans += 9 * A(9, i - 1);
        }
        
        unordered_set<int> st;
        for(int i=0;i<n;i++) {
            for(int j = i == 0 ? 1 : 0;j < vec[i];j++) {
                if (!st.count(j)) {
                    ans += A(9 - i, n - i - 1);
                }
            }
            if(st.count(vec[i])) {
                break;
            }
            st.insert(vec[i]);
        }
        
        return N - ans;
    }

private:
    int A(int n, int m) {
        int ans = 1;
        for(int i=n-m+1;i<=n;i++) {
            ans *= i;
        }
        return ans;
    }
};