// LeetCode Problem #283 Move Zeroes (23 ms)
class Solution {
public:
    void moveZeroes(vector<int>& nums) {
        vector<int>::iterator it;
        it = nums.begin();
        int c = 0;
        while (it < nums.end()) {
            if (*it == 0) {
                nums.erase(it);
                c++;
                it--;
            }
            it++;
        }
        for (int i = 1; i <= c; i++) {
            nums.push_back(0);
        }
    }
};
