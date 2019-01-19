class Solution {
public:
    Solution(vector<int> nums) {
        numbers = nums;
    }
    
    /** Resets the array to its original configuration and return it. */
    vector<int> reset() {
        return numbers;
    }
    
    /** Returns a random shuffling of the array. */
    vector<int> shuffle() {
        vector<int> ans = numbers;
        for(int i=numbers.size();i>0;i--)
        {
            swap(ans[rand() % i], ans[i-1]);
        }
        return ans;
    }

private:
    vector<int> numbers;
};

/**
 * Your Solution object will be instantiated and called as such:
 * Solution obj = new Solution(nums);
 * vector<int> param_1 = obj.reset();
 * vector<int> param_2 = obj.shuffle();
 */