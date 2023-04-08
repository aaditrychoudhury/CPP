class Solution {
public:
    double findMedianSortedArrays(vector<int>& nums1, vector<int>& nums2) {
        int n = nums1.size();
        int m = nums2.size();
        //set<int> st;
        vector<int> marray;
        for(int i=0;i<n;++i) marray.push_back(nums1[i]);
        for(int i=0;i<m;++i) marray.push_back(nums2[i]);
        sort(marray.begin(),marray.end());
        int s = marray.size();
        double ans;
        if(s%2 == 0){
            int a = s/2;
            int b = a-1;
            ans = double(marray[a] + marray[b])/2;
            return ans;
        }
        //ans = double(marr)
            return marray[s/2];
    }
};
