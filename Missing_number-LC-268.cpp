// LeetCode Problem #268 Missing Number (10 ms)
class Solution {
public:
    int missingNumber(vector<int>& nums) {
        int arr[10000] = {0};
        for (int i = 0; i < nums.size(); i++) {
            arr[nums[i]] = 1;
        }
        for (int i = 0; i <= nums.size(); i++) {
            if(arr[i]==0){
                return i;
            }
        }
        return 0;
    }
};
