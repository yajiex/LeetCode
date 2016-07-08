
class Solution {
public:
    vector<vector<int> > threeSum(vector<int> &num) {
        sort(num.begin(),num.end());
        int n=num.size();
        vector<vector<int> > ans;
        for(int i=0;i<n;i++)
        {
            if(i>0 && num[i]==num[i-1])
                continue;
            int start=i+1;
            int end=n-1;
            while(start<end)
            {
                if(start>i+1 && num[start]==num[start-1])
                {
                    start++;
                    continue;
                }
                if(end<n-1 && num[end]==num[end+1])
                {
                    end--;
                    continue;
                }
                int temp=num[i]+num[start]+num[end];
                if(temp<0)
                    start++;
                else if(temp==0)
                {
                    vector<int> vec;
                    vec.push_back(num[i]);
                    vec.push_back(num[start]);
                    vec.push_back(num[end]);
                    ans.push_back(vec);
                    start++;
                }
                else
                    end--;
            }
        }
        return ans;
    }
};


 