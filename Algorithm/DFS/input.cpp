#include <bits/stdc++.h>
using namespace std;

int main() {
    int n, m; cin >> n >> m;
    vector<vector<int>> g(n);
    for(int i=0; i<m; ++i){
        int a, b; cin >> a >> b;
        g[a].push_back(b);
        //受け取るグラフが無向グラフのときはg[b].push_back(a);も追加
    }
    

    //グラフに重みがある場合
    
    struct Edge{
        int to; //辺の行き先
        int weight; //辺の重み
        Edge(int t, int w) : to(t), weight(w) {}
    };

    int N, M; cin >> N >> M;
    vector<vector<Edge>> G(N);
    for(int i=0; i<M; ++i){
        int from, to, weight; cin >> from >> to >> weight;
        G[from].push_back(Edge(to, weight));
    }

}