class Solution {
    
    private:
    void solve(vector<int>& num,vector<int>& output,vector<vector<int>>& ans,int i){
        if(i == num.size()){
            ans.push_back(output);
            return;
        }
        //not including the ith elemnt
        solve(num,output,ans,i+1);
        //including the ith element
        output.push_back(num[i]);
        solve(num,output,ans,i+1);
        //backtracking
        output.pop_back();
        return;
       
    }
public:
    vector<vector<int>> subsets(vector<int>& nums) {
        int n = nums.size();
        vector<int> output;
        vector<vector<int>> ans;
        
        solve(nums,output,ans,0);
        
        return ans;
        
    }
};
