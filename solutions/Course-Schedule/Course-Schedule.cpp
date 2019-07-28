// unordered_map<int, unordered_set<int>> mp;
//         vector<int> degrees(numCourses, 0);
//         for(const auto& pr : prerequisites)
//         {
//             if(mp.count(pr.second))
//             {
//                 mp[pr.second].insert(pr.first);
//             }
//             else
//             {
//                 unordered_set<int> st;
//                 st.insert(pr.first);
//                 mp[pr.second] = st;
//             }
//         }
        
//         for(const auto& kv : mp)
//         {
//             for(const auto& t : kv.second)
//             {
//                 degrees[t]++;
//             }
//         }
        
//         queue<int> q;
//         for(int i=0;i<numCourses;i++)
//         {
//             if(degrees[i] == 0)
//             {
//                 q.push(i);
//             }
//         }
//         while(!q.empty())
//         {
//             auto t = q.front();
//             q.pop();
//             numCourses--;
//             for(const auto& x : mp[t])
//             {
//                 if(!--degrees[x])
//                 {
//                     q.push(x);
//                 }
//             }
//         }
        
//         return numCourses == 0;

// 2019-07-28
// O(n^2)
class Solution {
public:
    bool canFinish(int numCourses, vector<vector<int>>& prerequisites) {
        vector<int> degrees(numCourses, 0);
        unordered_map<int, unordered_set<int>> mp;
        for(const auto& pr: prerequisites)
        {
            if(mp.count(pr[1]))
            {
                mp[pr[1]].insert(pr[0]);
            }
            else
            {
                unordered_set<int> st;
                st.insert(pr[0]);
                mp[pr[1]] = st;
            }
        }
        for(const auto& kv : mp)
        {
            for(const auto& t : kv.second)
            {
                degrees[t]++;
            }
        }
        queue<int> q;
        for(int i=0;i<numCourses;i++)
        {
            if(degrees[i] == 0)
            {
                q.push(i);
            }
        }
        while(!q.empty())
        {
            auto t = q.front();
            q.pop();
            numCourses--;
            for(const auto& x : mp[t])
            {
                if(!--degrees[x])
                {
                    q.push(x);
                }
            }
        }
        return numCourses == 0;
    }
};