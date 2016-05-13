
class Solution {
public:
    vector<vector<int> > fourSum(vector<int> &num, int target) {
        sort(num.begin(),num.end());
        vector<vector<int> > ans;
        int n=num.size();
        for(int i=0;i<n;i++)
        {
            if(i>0 && num[i]==num[i-1])
                continue;
            for(int j=n-1;j>i;j--)
            {
                if(j<n-1 && num[j]==num[j+1])
                    continue;
                int start=i+1;
                int end=j-1;
                while(start<end)
                {
                    if(start>i+1 && num[start]==num[start-1])
                    {
                        start++;
                        continue;
                    }
                    if(end<j-1 && num[end]==num[end+1])
                    {
                        end--;
                        continue;
                    }
                    int cur=num[i]+num[start]+num[end]+num[j];
                    if(cur==target)
                    {
                        vector<int> vec;
                        vec.push_back(num[i]);
                        vec.push_back(num[start]);
                        vec.push_back(num[end]);
                        vec.push_back(num[j]);
                        ans.push_back(vec);
                        start++;
                    }
                    else if(cur<target)
                        start++;
                    else
                        end--;
                }
            }
        }
        return ans;
    }
};


 