class Solution {
public:
    int findLeastNumOfUniqueInts(vector<int>& arr, int k) {
        unordered_map<int, int> cnt;
        for(int i=0;i<arr.size();i++) {
            cnt[arr[i]]++;
        }
        
        sort(arr.begin(), arr.end(), [&cnt](int& x, int& y) {
            if(x == y) {
                return false;
            }
            if(cnt[x] < cnt[y]) {
                return true;
            } else if(cnt[x] > cnt[y]) {
                return false;
            } else {
                return x < y;
            }
        });
        
        int ans = 0;
        
        for(int i=0;i<k;i++) {
            if (i == 0 || arr[i] != arr[i-1]) {
                ans++;
            }
        }
        
        if(k > 0 && k < arr.size()) {
            if(arr[k] == arr[k-1]) {
                ans--;
            }
        }
        
        return cnt.size() - ans;
        
        
    }
};