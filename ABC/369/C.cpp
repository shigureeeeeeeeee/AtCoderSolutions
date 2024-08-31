#include <bits/stdc++.h>
using namespace std;

int main() {
    int N;
    cin >> N;
    
    vector<long long> A(N);
    for (int i = 0; i < N; i++) {
        cin >> A[i];
    }
    
    unsigned long long count = N; // 長さ1の部分列はすべて等差数列
    
    vector<int> dp(N, 1); // 各要素を終点とする最長の等差数列の長さ
    
    cout << "Initial count: " << count << endl;
    
    for (int i = 1; i < N; i++) {
        if (i == 1 || A[i] - A[i-1] != A[i-1] - A[i-2]) {
            dp[i] = 2;
        } else {
            dp[i] = dp[i-1] + 1;
        }
        count += dp[i] - 1; // 長さ2以上の等差数列をカウント
        cout << "i: " << i << ", dp[i]: " << dp[i] << ", Added: " << dp[i] - 1 << endl;
        cout << "Current count: " << count << endl;
    }
    
    cout << "Final count: " << count << endl;
    
    return 0;
}