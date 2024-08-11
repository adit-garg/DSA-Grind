// LeetCode Problem #1752 Check if Array Is Sorted and Rotated (2 ms)
class Solution {
public:
    bool check(vector<int>& nums) {
        int n = nums.size();
        for (int i = 0; i < n; i++) {
            nums.push_back(nums[i]);
        }
        if(n==1)return true;
        int count = 1;
        int c = nums.size();
        for (int i = 0; i < c - 1; i++) {
            if (nums[i + 1] >= nums[i]) {
                count++;
                if (count == n) {
                    return true;
                }
            } else {
                count = 1;
            }
        }
        return false;
    }
};
