https://practice.geeksforgeeks.org/problems/find-k-th-character-in-string3841/1

class Solution{
public:		
	
	char kthCharacter(int m, int n, int k)
	{
	    string ans;
	    //decimal to binary
	    if(m==0){
	        ans+="0";
	    }
	    while(m!=0){
	        ans+=to_string(m%2);
	        m/=2;
	    }
	    reverse(ans.begin(),ans.end());
	    //binary conversion completed
	    
	    for(int i=0;i<n;i++){
	        string temp="";
	        for(int j=0;j<ans.length();j++){
	            if(ans[j] == '0'){
	                temp+="01";
	            }
	            else{
	                temp+="10";
	            }
	            
	        }
	        ans=temp;
	       
	    }
	     return ans[k-1];
	    
	}
};
