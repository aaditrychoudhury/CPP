class Solution {
public:
    int searchInsert(vector<int>& nums, int target) {
        int ans;
        int i;
        if(target < nums[0]) return 0;
        for(i=0;i<nums.size();++i){
            if(nums[i] == target) return i;
            if(nums[i] > target && nums[i-1] < target) return i;
        }
        return i;
    }
};
