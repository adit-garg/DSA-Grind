// LeetCode Problem #128. Longest Consecutive Sequence
class Solution {
public:
    int longestConsecutive(vector<int>& nums) {
        sort(nums.begin(), nums.end());
        int count = 1;
        int max = count;
        if (nums.size() == 0) {
            return 0;
        }
        for (int i = 0; i < nums.size() - 1; i++) {
            if (nums[i + 1] == nums[i])
                continue;
            if (nums[i + 1] - nums[i] == 1) {
                count++;
            } else {
                if (count > max)
                max = count;
                count = 1;
            }
            
        }
        if (count > max)
                max = count;
        return max;
    }
};
