/*
Pick out tallest group of people and sort them in a subarray (S). Since there's no other groups of people taller than them, therefore each guy's index will be just as same as his k value.
For 2nd tallest group (and the rest), insert each one of them into (S) by k value. So on and so forth.
E.g.
input: [[7,0], [4,4], [7,1], [5,0], [6,1], [5,2]]
subarray after step 1: [[7,0], [7,1]]
subarray after step 2: [[7,0], [6,1], [7,1]]
*/
// class Solution {
// public:
//     vector<pair<int, int>> reconstructQueue(vector<pair<int, int>>& people) {
//         sort(people.begin(), people.end(),[](pair<int,int> p1, pair<int,int> p2){
//             return p1.first > p2.first || (p1.first == p2.first && p1.second < p2.second);
//         });
//         vector<pair<int,int>> sol;
//         for (auto person : people){
//             sol.insert(sol.begin() + person.second, person);
//         }
//         return sol;
//     }
// };

// 2020-06-07
class Solution {
public:
    vector<vector<int>> reconstructQueue(vector<vector<int>>& people) {
        sort(people.begin(), people.end(),[](vector<int> v1, vector<int> v2){
            return v1[0] > v2[0] || (v1[0] == v2[0] && v1[1] < v2[1]);
        });
        vector<vector<int>> sol;
        for (auto person : people){
            sol.insert(sol.begin() + person[1], person);
        }
        return sol;
    }
};