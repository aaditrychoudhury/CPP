class Solution {
    private:
    void dfs(string s,string d,unordered_map<string,int> &vis,unordered_map<string,vector<pair<string,double>>> mp, double &ans, double temp){
        //if already visted then return
        if(vis.count(s)) return;
        //if source == destination then return 
        if(s == d){
            ans = temp;
            return;
        }
        vis[s] = 1;
        for(auto it: mp[s]) {
            dfs(it.first,d,vis,mp,ans,temp*(it.second));
        }
        return;
    }
public:
    vector<double> calcEquation(vector<vector<string>>& equations, vector<double>& values, vector<vector<string>>& queries) {
        //create a bi directional graph
        unordered_map<string,vector<pair<string,double>>> mp;
        for(int i=0;i<equations.size();++i){

            mp[equations[i][0]].push_back({equations[i][1],values[i]});
            mp[equations[i][1]].push_back({equations[i][0],1.0/values[i]});
        }
        vector<double> f_ans;
        //now get the source and destination from the query and calculate the value from the graph
        //by dfs traveral get the path and calculate the distance
        for(int i=0;i<queries.size();++i){
            string source = queries[i][0];
            string dest = queries[i][1];
            unordered_map<string,int> visited;
            double ans = -1.0;
            double temp = 1.0;
            //we will aonly call dfs if souce is present in the graph
            if(mp.count(source)) dfs(source,dest,visited,mp,ans,temp);
            f_ans.push_back(ans);
        }
        return f_ans;
    }
};
