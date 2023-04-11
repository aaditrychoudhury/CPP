class Solution {
public:
    string removeStars(string s) {
        stack<char> st;
        for(int i=0;i<s.length();++i){
            if(s[i] == '*') st.pop();
            else st.push(s[i]);
        }
        string ans;
        while(!st.empty()){
            char ch = st.top();
            ans+=ch;
            st.pop();
        }
        reverse(ans.begin(),ans.end());
        return ans;
    }
};
