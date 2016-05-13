
class Solution {
public:
    bool isPalindrome(int x) {
        if(x<0)
            return false;
        int base=1;
        while(x/base>=10)
            base*=10;
        while(x)
        {
            int l=x/base;
            int r=x%10;
            if(l!=r)
                return false;
            x-=base*l;
            base/=100;
            x/=10;
        }
        return true;
    }
};


 