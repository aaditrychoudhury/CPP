class Solution {
public:
    int removeElement(vector<int>& nums, int val) {
        map<int,int> mp;
        for(int i=0;i<nums.size();++i) mp[nums[i]]++;
        int i=0;
        int count=0;
        for(auto it: mp){
            if(it.first != val){
                while(it.second > 0){
                    count++;
                    nums[i] = it.first;
                    it.second--;
                    ++i;
                }
            }
        }
        return count;
    }
};
