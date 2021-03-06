
// /**
//  * Definition for an interval.
//  * struct Interval {
//  *     int start;
//  *     int end;
//  *     Interval() : start(0), end(0) {}
//  *     Interval(int s, int e) : start(s), end(e) {}
//  * };
//  */
// bool cmp(const Interval &x,const Interval &y)
// {
//     return x.start<y.start;
// }
// class Solution {
// public:
//     vector<Interval> merge(vector<Interval> &intervals) {
//         vector<Interval> ans;
//         sort(intervals.begin(),intervals.end(),cmp);
//         for(int i=0;i<intervals.size();i++)
//         {
//             if(i==0)
//                 ans.push_back(intervals[i]);
//             else
//             {
//                 int size=ans.size();
//                 if(ans[size-1].end>=intervals[i].start)
//                     ans[size-1].end=max(ans[size-1].end,intervals[i].end);
//                 else
//                     ans.push_back(intervals[i]);
//             }
//         }
//         return ans;
//     }
// };

// 2019-07-21
// O(nlogn)
class Solution {
public:
    vector<vector<int>> merge(vector<vector<int>>& intervals) {
        sort(intervals.begin(), intervals.end(), cmp);
        vector<vector<int>> ans;
        for(int i=0;i<intervals.size();i++)
        {
            if (i == 0)
            {
                ans.push_back(intervals[i]);
            }
            else
            {
                int index = ans.size() - 1;
                if (ans[index][1] < intervals[i][0])
                {
                    ans.push_back(intervals[i]);
                }
                else
                {
                    ans[index][1] = max(ans[index][1], intervals[i][1]);
                }
            }
        }
        return ans;
        
    }
private:
    static bool cmp(const vector<int> &x,const vector<int> &y) {
        return x[0] < y[0];
    }
};
 