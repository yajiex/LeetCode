class Solution {
public:
    int findComplement(int num) {
        long i;
        for(i=1;i<=num;i*=2) num^=i; 
        return num;
    }
};