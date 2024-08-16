// LeetCode Problem #643 Maximum Average Subarray I
class Solution {
public:
    double findMaxAverage(vector<int>& nums, int k) {
        int sum=0;
        for(int i=0;i<k;i++){
            sum += nums[i];
        }
        double ans = sum;
        for(int i=k;i<nums.size();i++){
            sum = sum + nums[i] - nums[i-k];
            if(sum > ans) ans= sum;
        }
        ans = ans/k;
        return ans;
    }
};
