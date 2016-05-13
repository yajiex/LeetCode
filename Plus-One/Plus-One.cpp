
class Solution {
public:
    vector<int> plusOne(vector<int> &digits) {
        for(int i=digits.size()-1;i>=0;i--)
        {
            digits[i]++;
            if(digits[i]<10)
                break;
            digits[i]=0;
        }
        if(digits[0]==0)
        {
            digits[0]=1;
            digits.push_back(0);
        }
        return digits;
    }
};


 