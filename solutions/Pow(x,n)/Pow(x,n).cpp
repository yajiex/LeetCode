
class Solution {
public:
    double pow(double x, int n) {
        if(n==0)
            return 1;
        if(n<0)
            if(n==INT_MIN)
                return 1.0/(pow(x,INT_MAX)*x);
            else
                return 1.0/pow(x,-n);
        double temp=pow(x,n>>1);
        if(n%2)
            return temp*temp*x;
        else
            return temp*temp;
    }
};


 