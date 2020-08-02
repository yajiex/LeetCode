class Solution {
public:
    int getWinner(vector<int>& arr, int k) {
        if(k >= arr.size() - 1) {
            return *max_element(arr.begin(), arr.end()); 
        }
        
        int cur = arr[0];
        int cnt = 0;
        for(int i=1;i<arr.size();i++) {
            if(arr[i] > cur) {
                cnt = 1;
                cur = arr[i];
            } else {
                cnt++;
            }
            if (cnt == k) {
                return cur;
            }
        }
        return cur;
    }
};