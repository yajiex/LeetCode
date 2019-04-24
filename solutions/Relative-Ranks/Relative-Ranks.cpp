class Solution {
public:
    vector<string> findRelativeRanks(vector<int>& nums) {
        priority_queue<pair<int,int> > pq;
        for(int i=0;i<nums.size();i++)
        {
            pq.push(make_pair(nums[i],i));
        }
        vector<string> res(nums.size(),"");
        for(int i=0; i<nums.size();i++)
        {
            if(i==0) {res[pq.top().second] = "Gold Medal";}
            else if(i==1) {res[pq.top().second] = "Silver Medal";}
            else if(i==2) {res[pq.top().second] = "Bronze Medal";}
            else {res[pq.top().second] = to_string(i+1);}
            pq.pop();
        }
        return res;
    }
};