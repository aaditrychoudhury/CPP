#include <bits/stdc++.h> 
#include<vector>
using namespace std;

void solve(vector<int> &num,vector<int> &ans,vector<int> &op,int i){
   //base condition
    if(i == num.size()){
        if(op.size() == 0){
            ans.push_back(0);
            return;
        }else{
            int sum=0;
            for(int j=0;j<op.size();++j){
                sum+=op[j];
            }
            ans.push_back(sum);
            return;
        }
      }
    //not include ith elemnt 
    solve(num,ans,op,i+1);
    //include ith elment
    op.push_back(num[i]);
    solve(num,ans,op,i+1);
    op.pop_back();
    return;
}

vector<int> subsetSum(vector<int> &num)
{
    vector<int> ans;
    vector<int> op;
    solve(num,ans,op,0);
    sort(ans.begin(),ans.end());
    return ans;
    
}
