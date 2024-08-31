#include <iostream>
#include <vector>
#include <queue>
#include <cstring>

using namespace std;

typedef long long ll;

const int MAX_N = 400;
const int MAX_K = 5;
const ll INF = 1e18;

struct Edge {
    int to, bridge_id;
    ll weight;
};

vector<vector<Edge>> graph;
vector<int> required_bridges;
int N, M, Q, K;

ll bfs(int start, int end, int mask) {
    vector<vector<ll>> dist(N, vector<ll>(1 << K, INF));
    deque<pair<int, int>> q;
    
    q.emplace_back(start, 0);
    dist[start][0] = 0;
    
    while (!q.empty()) {
        int v = q.front().first;
        int used = q.front().second;
        q.pop_front();
        
        if (v == end && used == mask) return dist[v][used];
        
        for (const auto& e : graph[v]) {
            int new_used = used;
            if (e.bridge_id <= K) {
                new_used |= (1 << (e.bridge_id - 1));
            }
            
            if (dist[e.to][new_used] > dist[v][used] + e.weight) {
                dist[e.to][new_used] = dist[v][used] + e.weight;
                if (e.weight == 0) {
                    q.emplace_front(e.to, new_used);
                } else {
                    q.emplace_back(e.to, new_used);
                }
            }
        }
    }
    
    return -1;
}

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);
    
    cin >> N >> M;
    graph.resize(N);
    
    for (int i = 1; i <= M; i++) {
        int u, v;
        ll t;
        cin >> u >> v >> t;
        u--; v--;
        graph[u].push_back({v, i, t});
        graph[v].push_back({u, i, t});
    }
    
    cin >> Q;
    vector<ll> results;
    for (int q = 0; q < Q; q++) {
        cin >> K;
        required_bridges.clear();
        required_bridges.resize(K);
        for (int i = 0; i < K; i++) {
            cin >> required_bridges[i];
        }
        
        ll result = bfs(0, N-1, (1 << K) - 1);
        results.push_back(result);
    }
    
    for (const auto& result : results) {
        cout << result << '\n';
    }
    
    return 0;
}