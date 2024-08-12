// LeetCode Problem #189 Rotate Array (19 ms)
class Solution {
public:
    void rotate(vector<int>& nums, int k) {
        int n = nums.size();
        for (int i = 0; i < n; i++) {
            nums.push_back(nums[i]);
        }
        vector<int>::iterator it;
        k=k%n;
        it = nums.begin();
        nums.erase(it, it + n - k);
        it = nums.end();
        nums.erase(it - k, it-1);
        nums.erase(it);
    }
};
