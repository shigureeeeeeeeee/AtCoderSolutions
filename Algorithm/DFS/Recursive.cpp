#include <bits/stdc++.h>
using namespace std;
using graph = vector<vector<int>>;

vector<bool> seen;
void dfs(const graph &g, int v) {
    seen[v] = true; //vを訪問済みにする
    
    //vから行ける各頂点next_vについて
    for(auto next_v : g[v]) {
        if(seen[next_v]) continue; //next_vが訪問済みだったらスキップ
        dfs(g, next_v); //再帰的に探索
    }
}

int main() {
    int n, m; cin >> n >> m;
    graph g(n);
    for(int i = 0; i < m; ++i) {
        int a, b; cin >> a >> b;
        g[a].push_back(b);
        g[b].push_back(a);
    }
    
    seen.assign(n, false); //全頂点を未訪問に初期化
    dfs(g, 0);
}