
class Solution {
public:
    int findMin(vector<int> &num) {
        int l=0;
        int r=num.size()-1;
        while(l<r && num[l]>=num[r])
        {
            int m=l+(r-l)/2;
            if(num[m]>num[r])
                l=m+1;
            else if(num[m]<num[r])
                r=m;
            else
                l=l+1;
        }
        return num[l];
    }
};
 