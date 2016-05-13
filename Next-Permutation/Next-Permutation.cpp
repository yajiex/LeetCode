
class Solution {
public:
    void nextPermutation(vector<int> &num) {
        int n=num.size();
        int mark=-1;
        for(int i=n-1;i>=0;i--)
        {
            if(num[i]<=num[i-1])
                continue;
            else
            {
                mark=i-1;
                break;
            }
        }
        if(mark==-1)
        {
            reverse(num.begin(),num.end());
            return;
        }
        int mark2=0;
        for(int i=n-1;i>mark;i--)
        {
            if(num[i]>num[mark])
            {
                mark2=i;
                break;
            }
        }
        swap(num[mark],num[mark2]);
        reverse(num.begin()+mark+1,num.end());
        return ;
    }
};


 