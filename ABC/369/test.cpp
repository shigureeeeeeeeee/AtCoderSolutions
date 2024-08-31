#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

int main() {
    int N;
    cin >> N;
    
    vector<long long> A(N);
    for(int i = 0; i < N; i++) {
        cin >> A[i];
    }
    
    // モンスターの強さを降順にソート
    sort(A.rbegin(), A.rend());
    
    long long max_exp = 0;
    
    // 経験値の計算
    for(int i = 0; i < N; i++) {
        if (i % 2 == 0) {
            // 奇数回目（iが偶数の場合）の場合、追加経験値なし
            max_exp += A[i];
        } else {
            // 偶数回目（iが奇数の場合）の場合、追加で経験値を得る
            max_exp += 2 * A[i];
        }
    }
    
    cout << max_exp << endl;
    
    return 0;
}
