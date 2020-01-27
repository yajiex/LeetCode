class Solution {
public:
    int maximumSwap(int num) {
        vector<int> vec;
        while(num) {
            int tmp = num % 10;
            vec.push_back(tmp);
            num /= 10;
        }
        std::reverse(vec.begin(), vec.end());
        int n = vec.size();
        for(int i=0;i<n;i++) {
            int index = n;
            int curMax = vec[i];
            for(int j=n-1;j>i;j--) {
                if (vec[j] > curMax) {
                    index = j;
                    curMax = vec[j];
                }
            }
            if (index != n) {
                swap(vec[index], vec[i]);
                break;
            }
        }
        
        int ans = 0;
        for(int k=0;k<n;k++) {
            ans = ans * 10 + vec[k];
        }
        return ans;
    }
};