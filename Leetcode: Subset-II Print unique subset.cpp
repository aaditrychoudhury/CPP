class Solution {
    private:
        void solve(vector<int> &num,vector<int> &output,vector<vector<int>>& ans,int i,bool prev){
            if(i == num.size()){
                ans.push_back(output);
                return;
            }
            
            //not inckude the ith element
            solve(num,output,ans,i+1,false);
            
            if(i>0 &&num[i] == num[i-1] && !(prev)){
                return;
            }
            //include the ith element
            output.push_back(num[i]);
            solve(num,output,ans,i+1,true);
            output.pop_back();
            return;
        }
public:
    vector<vector<int>> subsetsWithDup(vector<int>& nums) {
        sort(nums.begin(),nums.end());
        vector<int> output;
        vector<vector<int>> ans;
        bool prev = false;
        
        solve(nums,output,ans,0,prev);
        return ans;
        
    }
};
