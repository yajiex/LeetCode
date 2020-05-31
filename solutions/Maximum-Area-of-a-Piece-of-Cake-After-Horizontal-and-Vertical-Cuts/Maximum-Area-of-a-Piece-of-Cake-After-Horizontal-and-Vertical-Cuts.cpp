class Solution {
public:
    int maxArea(int h, int w, vector<int>& horizontalCuts, vector<int>& verticalCuts) {
        int x = INT_MIN;
        std::sort(std::begin(horizontalCuts), std::end(horizontalCuts));
        for(int i=0;i<horizontalCuts.size();i++) {
            if (i==0) {
                x = horizontalCuts[i];
            } else {
                x = max(x, horizontalCuts[i] - horizontalCuts[i-1]);
            }
        }
        x = max(x, h - horizontalCuts[horizontalCuts.size() - 1]);
        
        int y = INT_MIN;
        std::sort(std::begin(verticalCuts), std::end(verticalCuts));
        for(int i=0;i<verticalCuts.size();i++) {
            if (i==0) {
                y = verticalCuts[i];
            } else {
                y = max(y, verticalCuts[i] - verticalCuts[i-1]);
            }
        }
        y = max(y, w - verticalCuts[verticalCuts.size() - 1]);
        cout<<x<<" "<<y<<endl;
        return (long long)((long long)x * (long long)y) % 1000000007;
    }
};