class Solution {
public:
    int romanToInt(string s) {
        int n = s.length();
        int sum =0;
        map <char,int> mp;
        mp['I']=1;
        mp['V']=5;
        mp['X']=10;
        mp['L']=50;
        mp['C']=100;
        mp['D']=500;
        mp['M']=1000;
        //int ans=0;
        int i=0;
       for(i=0;i<n-1;++i){
           if(mp[s.at(i)] < mp[s.at(i+1)]){
               sum += (mp[s.at(i+1)] - mp[s.at(i)]);
               ++i;
           }
           else{
               sum+= mp[s.at(i)];
           }
       }
       if(i  == n-1) sum+=mp[s.at(i)];
       return sum;
    }
};
