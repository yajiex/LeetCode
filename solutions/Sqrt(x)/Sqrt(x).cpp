
class Solution {
public:
    int sqrt(int x) {
        if(x==0)
            return 0;
        double pre;
        double cur=1;
        while(abs(cur-pre)>1e-5)
        {
            pre=cur;
            cur=pre/2 + x/(2*pre);
        }
        return int(cur);
    }
};


 