
class Solution {
public:
    int singleNumber(int A[], int n) {
        int ones=0;
        int twos=0;
        int threes=0;
        for(int i=0;i<n;i++)
        {
            twos=twos | ones&A[i];//出现两次1
            ones=ones ^ A[i];//出现一次1
            threes=ones & twos;//出现三次1
            ones = ones & ~threes;//从ones中将出现三次的位置清零
            twos = twos & ~threes;//从twos中将出现三次的位置清零
        }
        return ones;
    }
};



 