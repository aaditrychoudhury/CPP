//{ Driver Code Starts
// Initial Template for c++

#include <bits/stdc++.h>
using namespace std;

// } Driver Code Ends
// User function Template for C++
int vec[505][505];
class Solution{
    bool isPalindrom(string str, int i,int j){
        while(i<=j){
            if(str[i] != str[j]) return false;
            i++;
            j--;
        }
        return true;
    }
    // int solve(string str,int i,int j,vector<vector<int>> &vec){
    //     if(i>=j) return 0;
    //     if(isPalindrom(str,i,j)) return 0;
    //     if(vec[i][j] != -1) return vec[i][j];
    //     int ans = INT_MAX,left,right;
    //     for(int k=i;k<j;++k){
    //         if(vec[i][k] != -1) left = vec[i][k];
    //         else {
    //             left = solve(str,i,k,vec);
    //             vec[i][k] = left;
    //         }
    //         if(vec[k+1][j] != -1) right = vec[k+1][j];
    //         else{
    //             right = solve(str,k+1,j,vec);
    //             vec[k+1][j] = right;
    //         }
    //         int ta = 1 + left + right;
    //         ans = min(ans,ta);
    //     }
    //     return vec[i][j]=ans;
    // }
public:
    int palindromicPartition(string str)
    {
        // code here
        int n = str.length();
        //vector<vector<int>> vec(n,vector<int>(n,0));
        for(int i=0;i<n;++i){
            for(int j=0;j<n;++j) vec[i][j] = 0;
        }
        for(int len =2;len<=n;++len){
            for(int i=0;i<n-len+1;++i){
                int j = i+len-1;
                if(isPalindrom(str,i,j)) vec[i][j] = 0;
                else{
                    vec[i][j] = INT_MAX;
                    for(int k = i;k<j;++k){
                        vec[i][j] = min(vec[i][j], 1+vec[i][k]+vec[k+1][j]);
                    }
                }
            }
        }
        return vec[0][n-1];
        
    }
};

//{ Driver Code Starts.

int main(){
    int t;
    cin>>t;
    while(t--){
        string str;
        cin>>str;
        
        Solution ob;
        cout<<ob.palindromicPartition(str)<<"\n";
    }
    return 0;
}
// } Driver Code Ends
