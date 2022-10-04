#include <bits/stdc++.h> 
#include <bits/stdc++.h> 
void setZeros(vector<vector<int>> &matrix)
{
	// Write your code here.
    int m = matrix.size();
    int n = matrix[0].size();
    int x=0,y=0;
    //checking for the first row and column
    for(int i =0;i<m;++i){
        if(matrix[i][0] == 0) y=1;
    }
    for(int j=0;j<n;++j){
        if(matrix[0][j] == 0) x=1;
    }
    //for the rest of the array m-1Xn-1
    for(int i=1;i<m;++i){
        for(int j=1;j<n;++j){
            if(matrix[i][j] ==0){
                matrix[i][0] = 0;
                matrix[0][j]=0;
            }
        }
    }
    //checking in the dummmy array if zero then change in m-1Xn-1 //matrix
    for(int i=1;i<m;++i){
        if(matrix[i][0] == 0){
            for(int j=1;j<n;++j){
                matrix[i][j] =0;
            }
        }
    }
    for(int j=1;j<n;++j){
        if(matrix[0][j] == 0){
            for(int i=1;i<m;++i){
                matrix[i][j] = 0;
            }
        }
    }
    //for the dummy rows
    if(y == 1){
        for(int i=0;i<m;++i) matrix[i][0] =0;
    }
    if(x == 1){for(int j=0;j<n;++j) matrix[0][j] =0;}
    
}
