class Solution {
private:
    void solve(string ip,string op,vector<string> &ans){
        if(ip.length() == 0){
            ans.push_back(op);
            return;
        }
      if(isdigit(ip[0])){
          string op3 = op;
          op3.push_back(ip[0]);
          ip.erase(ip.begin()+0);  
          solve(ip,op3,ans);
          
      }
        else{
            
            string op1 = op;
            string op2=op;
             op1.push_back(toupper(ip[0]));
            op2.push_back(tolower(ip[0]));
            ip.erase(ip.begin()+0);
            solve(ip,op1,ans);
            solve(ip,op2,ans);
            
        }return;
        
    }
public:
    vector<string> letterCasePermutation(string s) {
        vector<string> ans;
        string ip = s;
        string o = "";
        solve(ip,o,ans);
        return ans;
        
    }
    
};
