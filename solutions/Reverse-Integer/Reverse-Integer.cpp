
class Solution {
public:
    int reverse(int x) {
        long long ans=0;
        while(x)
        {
            ans=ans*10+x%10;
            if(ans>INT_MAX)
                return INT_MAX;
            if(ans<INT_MIN) 
                return INT_MIN;
            x/=10;
        }
        return ans;
    }
};


 