
class Solution {
public:
    string getPermutation(int n, int k) {
        string ans="";
        vector<int> fac(n+1,1);
        vector<char> num(n,'1');
        for(int i=2;i<=n;i++)
        {
            fac[i]=fac[i-1]*i;
            num[i-1]=i+'0';
        }
        k--;
        for(int i=n-1;i>=0;i--)
        {
            int cur=k/fac[i];
            k%=fac[i];
            ans+=num[cur];
            num.erase(num.begin()+cur);
        }
        return ans;
    }
};


 