private:
    void solve(int n,int one,int zero,string op,vector<string> &ans){
        if(n == 0){
            ans.push_back(op);
            return;
        }
        
        string op1= op;
        op1.push_back('1');
        solve(n-1,one+1,zero,op1,ans);
        
        if(one>zero){
            string op2=op;
            op2.push_back('0');
            solve(n-1,one,zero+1,op2,ans);
        }
        return;
    }
public:	
	vector<string> NBitBinary(int N)
	{
	    // Your code goes here
	    vector<string> ans;
	    int one =0;
	    int zero = 0;
	    string output;
	    solve(N,one,zero,output,ans);
	    return ans;
	}
