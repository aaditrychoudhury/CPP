 void solve(int n,int source,int dest,int helper,long long &count){
        ++count;
        if(n==1){
            cout<<"move disk "<<n<<" from rod "<<source<<" to rod "<<dest<<endl;
            return;
        }
        solve(n-1,source,helper,dest,count);
        cout<<"move disk "<<n<<" from rod "<<source<<" to rod "<<dest<<endl;
        solve(n-1,helper,dest,source,count);
        return;
        
    }

    // avoid space at the starting of the string in "move disk....."
    long long toh(int N, int from, int to, int aux) {
        // Your code here
        long long count =0;
        solve( N, from, to, aux,count);
        return count;
        
    }
