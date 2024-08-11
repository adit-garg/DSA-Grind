// LeetCode Problem #26 Remove Duplicates from Sorted Array
class Solution {
public:
    int removeDuplicates(vector<int>& nums) {
        int k = 1;
        vector<int>::iterator it;
        it = nums.begin();
        for(int i =1;i<nums.size();i++){
            if(nums[i-1]==nums[i]){
                nums.erase(it+i-1);
                i--;
            }else{
                k++;
            }
        }
        return k;
    }
};
