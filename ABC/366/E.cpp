#include <iostream>
#include <vector>
#include <cmath>

using namespace std;

int main() {
    int N, D;
    cin >> N >> D;

    // 点の座標を読み込む
    vector<pair<int, int>> points(N);
    for (int i = 0; i < N; i++) {
        cin >> points[i].first >> points[i].second;
    }

    long long count = 0;
    // -D から D までの範囲で探索
    for (int x = -D; x <= D; x++) {
        for (int y = -D; y <= D; y++) {
            long long total_distance = 0;
            // 各点との距離の合計を計算
            for (const auto& [px, py] : points) {
                total_distance += abs(x - px) + abs(y - py);
                if (total_distance > D) break; // 早期終了の最適化
            }
            // 距離の合計が D 以下なら、カウントを増やす
            if (total_distance <= D) {
                count++;
            }
        }
    }

    // 結果を出力
    cout << count << endl;

    return 0;
}