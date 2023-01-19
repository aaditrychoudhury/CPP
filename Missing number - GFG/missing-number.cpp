//{ Driver Code Starts
#include<bits/stdc++.h>
using namespace std;
#define ll long long

int missingNumber(int a[], int n);

int main()
{
	int t;
	cin>>t;
	while(t--)
	{
		int i=0, n;
		cin>>n;
		int a[n+5];
		for(i=0;i<n-1;i++)
			cin>>a[i];
			
		cout<<missingNumber(a, n)<<endl;
	}
}
// } Driver Code Ends


int missingNumber(int A[], int N)
{
    // Your code goes here
    int dum[N+1]={0};
    int ans=-1;
    int j;
    for(int i=0;i<N-1;++i){
        j =A[i];
        dum[j]=1;
    }
    for(int i=1;i<=N;++i){
        if(dum[i] == 0){
            ans=i;
            break;
        }
    }
    return ans;
}