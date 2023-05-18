class Solution {
public:
    vector<int> findSmallestSetOfVertices(int n, vector<vector<int>>& edges) {
        //jiski indegree 0 ho woh ans
        vector<int> indegree(n,0);
        for(auto &edge : edges){
            indegree[edge[1]]++;
        }
        vector<int> result;
        for(int i =0;i<n;++i){
            if(indegree[i] == 0)
                result.push_back(i);
        }
        if(result.size() == 0) result.push_back(0);
        return result;
    }
};
