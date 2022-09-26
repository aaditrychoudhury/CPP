#include<bits/stdc++.h>

using namespace std;

void solve(stack<int> &s,int k){
    if(k==1){
        s.pop();
        return;
    }
    int temp = s.top();
    s.pop();
    solve(s,k-1);
    s.push(temp);
    return;
}

stack<int> middleElement(stack<int> &s,int n){
    if(s.size() == 0){
        return s;
    }

    int k = (n/2)+1;
    solve(s,k);
    return s;
}

int main(){
    stack<int> s;
    s.push(0);
    s.push(1);
    s.push(2);
    s.push(3);
    s.push(4);
    s.push(5);
    int n = s.size();

    middleElement(s,n);

    while(!s.empty()){
        cout<<s.top()<<endl;
        s.pop();
    }
    return 0;
}
