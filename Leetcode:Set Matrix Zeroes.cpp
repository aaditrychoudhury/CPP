class Solution {
public:
    void setZeroes(vector<vector<int>>& matrix) {
        int m = matrix.size();
        int n = matrix[0].size();
        int x=1,y=1;
        //checking the first row and col
        for(int i=0;i<m;++i){
            if(matrix[i][0] == 0){y=0;}
        }
        for(int j=0;j<n;++j){
            if(matrix[0][j] == 0){x=0;}
        }
        //checking the rest of the matrix
        for(int i =1;i<m;++i){
            for(int j =1;j<n;++j){
                if(matrix[i][j] == 0){
                    matrix[i][0] = 0;
                    matrix[0][j] = 0;
                }
            }
        }
        
        //assigning zero to the rows and columns
        for(int j=1;j<n;++j){
            if(matrix[0][j] == 0){
                for(int i =1;i<m;++i){
                    matrix[i][j] =0;
                }
            }
        }
        
        for(int i =1;i<m;++i){
            if(matrix[i][0] == 0){
                for(int j=1;j<n;++j){
                    matrix[i][j] = 0;
                }
            }
        }
        //if the first row and column intially had a zero then make the whole row and column as 0
        if(x==0){
            for(int j=0;j<n;++j){matrix[0][j] = 0;}
        }
        if(y==0){
            for(int i=0;i<m;++i){matrix[i][0]=0;}
        }
        
        
        
    }
};
