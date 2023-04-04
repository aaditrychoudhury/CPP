class Solution {
public:
    vector<int> intersection(vector<int>& nums1, vector<int>& nums2) {
        vector<int> ans;
        int n = nums1.size();
        int m = nums2.size();
        //int k;
        set<int> st;
        for(int i=0;i<n;++i){
            //if(mp[nums1[i]] != 1)mp[nums1[i]]++;
            st.insert(nums1[i]);
        }
        set<int> st2;
        for(int i=0;i<m;++i){
            if(st.find(nums2[i]) != st.end()) {
                st2.insert(nums2[i]);
                //mp[nums2[i]] =0;
            }
        }
        for(auto it: st2){
            ans.push_back(it);
        }
        return ans;
    }
};
