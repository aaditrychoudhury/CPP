class Solution {
public:
    void solve(int i,vector<int>& arr,int target,vector<vector<int>> &ans,vector<int> &ot){
        if(i == arr.size()){
            if(target == 0){
                ans.push_back(ot);
            }
          return;
        }
        
        //pick up the element
        if(arr[i] <= target){
            ot.push_back(arr[i]);
            solve(i,arr,target - arr[i],ans,ot);
            ot.pop_back();
        }
        solve(i+1,arr,target,ans,ot);
        
    }
    vector<vector<int>> combinationSum(vector<int>& candidates, int target) {
        sort(candidates.begin(),candidates.end());
        vector<vector<int>> ans;
        vector<int> ot;
        solve(0,candidates,target,ans,ot);
        return ans;
        
    }
};
