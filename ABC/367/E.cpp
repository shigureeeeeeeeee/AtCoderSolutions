#include <iostream>
#include <vector>
#include <unordered_map>
#include <algorithm>
#include <climits>

using namespace std;

vector<int> simulateOperations(const vector<int>& X, const vector<int>& A, int N, long long K) {
    vector<int> result = A;
    for (long long k = 0; k < K; k++) {
        vector<int> next(N);
        for (int i = 0; i < N; i++) {
            next[i] = result[X[i]];
        }
        result = next;
    }
    return result;
}

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);
    
    int N;
    long long K;
    cin >> N >> K;

    vector<int> X(N), A(N);
    for (int i = 0; i < N; i++) {
        cin >> X[i];
        X[i]--; // 0-indexedに調整
    }
    for (int i = 0; i < N; i++) cin >> A[i];

    if (K == 0) {
        for (int i = 0; i < N; i++) {
            cout << A[i] << (i == N-1 ? '\n' : ' ');
        }
        return 0;
    }

    if (K <= N) {
        vector<int> result = simulateOperations(X, A, N, K);
        for (int i = 0; i < N; i++) {
            cout << result[i] << (i == N-1 ? '\n' : ' ');
        }
    } else {
        vector<int> cycle_values;
        vector<bool> visited(N, false);
        vector<int> result(N);

        for (int i = 0; i < N; i++) {
            if (visited[i]) continue;

            int current = i;
            vector<int> cycle;
            unordered_map<int, int> value_count;

            while (!visited[current]) {
                visited[current] = true;
                cycle.push_back(current);
                value_count[A[current]]++;
                current = X[current];
            }

            int max_count = 0;
            int cycle_value = INT_MAX;
            for (const auto& pair : value_count) {
                if (pair.second > max_count || (pair.second == max_count && pair.first < cycle_value)) {
                    max_count = pair.second;
                    cycle_value = pair.first;
                }
            }

            for (int index : cycle) {
                result[index] = cycle_value;
            }
            cycle_values.push_back(cycle_value);
        }

        unordered_map<int, int> global_value_count;
        for (int value : cycle_values) {
            global_value_count[value]++;
        }

        int global_max_count = 0;
        int global_value = INT_MAX;
        for (const auto& pair : global_value_count) {
            if (pair.second > global_max_count || (pair.second == global_max_count && pair.first < global_value)) {
                global_max_count = pair.second;
                global_value = pair.first;
            }
        }

        for (int i = 0; i < N; i++) {
            cout << global_value << (i == N-1 ? '\n' : ' ');
        }
    }

    return 0;
}