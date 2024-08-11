#include <bits/stdc++.h>
using namespace std;

int main() {
    int N;
    cin >> N;

    vector<vector<vector<int>>> A(N + 1, vector<vector<int>>(N + 1, vector<int>(N + 1, 0)));
    vector<vector<vector<long long>>> sum(N + 1, vector<vector<long long>>(N + 1, vector<long long>(N + 1, 0)));

    // 入力の読み取りと3次元累積和の計算
    for (int x = 1; x <= N; x++) {
        for (int y = 1; y <= N; y++) {
            for (int z = 1; z <= N; z++) {
                cin >> A[x][y][z];
                sum[x][y][z] = A[x][y][z] + sum[x-1][y][z] + sum[x][y-1][z] + sum[x][y][z-1] 
                              - sum[x-1][y-1][z] - sum[x-1][y][z-1] - sum[x][y-1][z-1] 
                              + sum[x-1][y-1][z-1];
            }
        }
    }

    int Q;
    cin >> Q;

    vector<long long> results;

    // クエリの処理
    for (int i = 0; i < Q; i++) {
        int Lx, Rx, Ly, Ry, Lz, Rz;
        cin >> Lx >> Rx >> Ly >> Ry >> Lz >> Rz;

        long long result = sum[Rx][Ry][Rz] - sum[Lx-1][Ry][Rz] - sum[Rx][Ly-1][Rz] - sum[Rx][Ry][Lz-1]
                         + sum[Lx-1][Ly-1][Rz] + sum[Lx-1][Ry][Lz-1] + sum[Rx][Ly-1][Lz-1]
                         - sum[Lx-1][Ly-1][Lz-1];

        results.push_back(result);
    }

    for (const auto& result : results) {
        cout << result << endl;
    }

    return 0;
}
