// 3310. Remove methods from projects

#include <vector>
using namespace std;

class Solution {
public:

    void dfs(int u, vector<vector<int> >&graph, vector<bool>& checker){
        checker[u] = true;

        for (int i = 0; i < graph[u].size(); i++){
            int v = graph[u][i];
            if (!checker[v]){
                dfs(v, graph, checker);
            }
        }
    }

    vector<int> remainingMethods(int n, int k, vector<vector<int>>& invocations) {
        
        vector<vector<int> > graph(n);

        for (int i = 0; i < invocations.size(); i++){
            int u = invocations[i][0];
            int v = invocations[i][1];
            graph[u].push_back(v);
        }
        
        vector<bool> checker(n, false);
        dfs(k, graph, checker);
        
        for (int i = 0; i < invocations.size(); i++){
            int u = invocations[i][0];
            int v = invocations[i][1];

            if (!checker[u] && checker[v]) {
                vector<int> ans;
                for (int j = 0; j < n; j++) {
                    ans.push_back(j);
                }
                return ans;
            }
        }

        vector<int> ans;
        for (int i = 0; i < n; i++) {
            if (!checker[i]) {
                ans.push_back(i);
            }
        }
        return ans;
    }
};