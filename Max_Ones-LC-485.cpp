// LeetCode Problem #485 Max Consecutive Ones (24 ms)
class Solution {
public:
    int findMaxConsecutiveOnes(vector<int>& nums) {
        int count =0;
        vector<int> v;
        for(int i = 0;i<nums.size();i++){
            if(nums[i]==1){
                count++;
            }else{
                v.push_back(count);
                count = 0;
            }
        }
        v.push_back(count);
        return *max_element(v.begin(),v.end());
    }
};
