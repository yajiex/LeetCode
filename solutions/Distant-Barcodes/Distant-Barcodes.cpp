class Solution {
public:
    vector<int> rearrangeBarcodes(vector<int>& barcodes) {
        vector<int> hash(10001, 0);
        int maxValue = 0;
        int maxCount = 0;
        for(int i=0;i<barcodes.size();i++) {
            maxCount = max(maxCount, ++hash[barcodes[i]]);
            maxValue = (maxCount == hash[barcodes[i]]) ? barcodes[i] : maxValue;
        }
        
        int pos = 0;        
        for(int i=0;i<=10000;i++) {
            int value = i == 0 ? maxValue : i;
            while(hash[value]-- > 0) {
                barcodes[pos] = value;
                pos = (pos + 2 < barcodes.size()) ? pos + 2 : 1;
            }
        }
        
        return barcodes;
    }
};