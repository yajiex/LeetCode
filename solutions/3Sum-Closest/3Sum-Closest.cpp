
class Solution {
public:
    int threeSumClosest(vector<int> &num, int target) {
        sort(num.begin(),num.end());
        int n=num.size();
        int ans=0;
        bool first=true;
        for(int i=0;i<n;i++)
        {
            int start=i+1;
            int end=n-1;
            while(start<end)
            {
                int temp=num[i]+num[start]+num[end];
                if(temp<target)
                    start++;
                else if(temp==target)
                    return temp;
                else
                    end--;
                if(first || abs(temp-target)<abs(ans-target))
                {
                    ans=temp;
                    first=false;
                }
            }
        }
        return ans;
    }
};


 