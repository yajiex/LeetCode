/*
General idea:

Step 1:

Use a multimap to sort all boundary points. For a start point of an interval, let the height be positive; otherwise, let the height be negative. Time complexity: O(n log n)

Step 2:

Use a multiset (rather than a heap/priority_queue) to maintain the current set of heights to be considered. If a new start point is met, insert the height into the set, otherwise, delete the height. The current max height is the back() element of the multiset. For each point, the time complexity is O(log n). The overall time complexity is O(n log n).

Step 3:

Delete the points with equal heights. Time: O(n)

Time Complexity: O(n log n)

Space Complexity: O(n)

*/
class Solution {
public:
	vector<pair<int, int>> getSkyline(vector<vector<int>>& buildings) {

        // Step 1:
		multimap<int, int> coords;
		for (const vector<int> & building : buildings) {
			coords.emplace(building[0], building[2]);
			coords.emplace(building[1], -building[2]);
		}

        // Step 2:
		multiset<int> heights = { 0 };
		map<int, int> corners;
		for (const pair<int, int> & p : coords) {
			if (p.second > 0) {
				heights.insert(p.second);
			}
			else {
				heights.erase(heights.find(-p.second));
			}
			int cur_y = *heights.rbegin();
			corners[p.first] = cur_y;
		}

        // Step 3:
		function<bool(pair<int, int> l, pair<int, int> r)> eq2nd = [](pair<int, int> l, pair<int, int> r){ return l.second == r.second;  };
		vector<pair<int, int>> results;
		unique_copy(corners.begin(), corners.end(), back_insert_iterator<vector<pair<int, int>>>(results), eq2nd);
		return results;
	}
};