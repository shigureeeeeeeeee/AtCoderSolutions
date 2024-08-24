#include <bits/stdc++.h>
using namespace std;

int main() {
    int N;
    cin >> N;
    
    vector<int> A(N);
    for (int i = 0; i < N; i++) {
        cin >> A[i];
    }

    int steps = 0;
    
    // 正の要素が2つ以上の間、操作を続ける
    while (count_if(A.begin(), A.end(), [](int x) { return x > 0; }) > 1) {
        // デバッグ用：現在の状態を表示
        cout << "Step " << steps + 1 << ": ";
        for (int i = 0; i < N; i++) {
            cout << A[i] << " ";
        }
        cout << endl;

        // 全ての正の要素を1ずつ減らす
        for (int i = 0; i < N; i++) {
            if (A[i] > 0) {
                A[i]--;  // 1ずつ減らす
            }
        }
        steps++;  // 操作回数を増やす
    }

    // デバッグ用：最終状態を表示
    cout << "Final step: ";
    for (int i = 0; i < N; i++) {
        cout << A[i] << " ";
    }
    cout << endl;

    cout << steps << endl;  // 最終的な操作回数を出力
    return 0;
}
