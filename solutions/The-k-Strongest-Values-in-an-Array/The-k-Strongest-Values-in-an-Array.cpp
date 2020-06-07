class Solution {
public:
    vector<int> getStrongest(vector<int>& arr, int k) {
        int n = arr.size();
        nth_element(arr.begin(), arr.begin()+(n-1)/2, arr.end());
        int m = arr[(n-1)/2];
        sort(begin(arr), end(arr), [m](int x, int y) {
            int d1 = abs(x-m);
            int d2 = abs(y-m);
            if (d1==d2) {
                return x>y;
            } else {
                return d1>d2;
            }
        });
        vector<int> ans;
        for(int i=0;i<k;i++) {
            ans.push_back(arr[i]);
        }
        return ans;
    }
};