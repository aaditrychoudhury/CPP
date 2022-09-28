void solve(string ip,string op,vector<string> &ans){
            if(ip.length() == 0){
                ans.push_back(op);
                return;
            }
            string op1 = op;
            string op2 = op;
            op1 = op1+' '+ip[0];
            op2 = op2 + ip[0];
            ip = ip.substr(1);
            solve(ip,op1,ans);
            solve(ip,op2,ans);
            return;
            
            
        }
        
        
    vector<string> permutation(string S){
        // Code Here
        vector<string> ans;
        string output;
        output = S[0];
        S = S.substr(1);
        solve(S,output,ans);
        return ans;
    }
