// https://leetcode.com/problems/minimum-swaps-to-arrange-a-binary-grid/discuss/767912/Java-19-lines-bubble-sort-with-line-by-line-explanation-easy-to-understand

// 0 1 2
// 2 1 0
// 1 0 2
// 
class Solution {
public:
int minSwaps(vector<vector<int>>& grid)
{
	vector<int> cnt(grid.size());
	for (int i = 0; i < grid.size(); i++)
	{
		for (int j = grid.size() - 1; j >= 0; j--)
		{
			if (grid[i][j] == 0)
				cnt[i]++;
			else
				break;
		}
	}

	int res = 0;
	int i = 0;
	while(i < cnt.size())
	{
		if (cnt[i] < grid.size() - 1 - i)
		{
			int j = i;
			while (j < grid.size() && cnt[j] < grid.size() - 1 - i) ++j;
			res += j - i;
            
            if(j == grid.size())
                return -1;
            
			while (j > i)
            {
                swap(cnt[j], cnt[j - 1]);
                --j;
            }
		}
		else
			++i;
	}

	return res;
}
};