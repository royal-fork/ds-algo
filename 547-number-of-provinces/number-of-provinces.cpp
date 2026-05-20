class Solution {
public:
     void dfs(int node, vector<int>& visited, vector<vector<int>>& isConnected){
        visited[node]=1;
        for(int i = 0; i < isConnected.size(); i++) {

            if(isConnected[node][i] == 1 && !visited[i]) {
                dfs(i, visited, isConnected);
            }
        }


    }
    int findCircleNum(vector<vector<int>>& isConnected) {
        int prov=0;
        int n=isConnected.size();
        vector<int> visited(n,0);
        for(int i=0;i<n;i++){
            if(!visited[i]){
                dfs(i,visited,isConnected);
                prov++;
            }
        }
        return prov;
    }
};