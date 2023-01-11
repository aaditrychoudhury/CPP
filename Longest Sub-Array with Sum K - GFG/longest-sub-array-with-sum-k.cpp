//{ Driver Code Starts
#include <bits/stdc++.h>
using namespace std;


// } Driver Code Ends
class Solution{
    public:
    int lenOfLongSubarr(int A[],  int N, int K) 
    { 
        // Complete the function
        int len=0;
        int sum=0;
        map<int,int> m;
        m[0] =-1;
        for(int j=0;j<N;++j){
            sum+=A[j];
            if(m.find(sum-K) != m.end()){
                len = max(len,j-m[sum-K]);
            }
            if(m.find(sum) == m.end()){
                m[sum] = j;
            }
        }
        return len;
    } 

};

//{ Driver Code Starts.

int main() {
	//code
	
	int t;cin>>t;
	while(t--)
	{
	    int n, k;
	    cin>> n >> k;
	    int a[n];
	    
	    for(int i=0;i<n;i++)
	        cin>>a[i];
	   Solution ob;
	   cout << ob.lenOfLongSubarr(a, n , k)<< endl;
	    
	}
	
	return 0;
}
// } Driver Code Ends