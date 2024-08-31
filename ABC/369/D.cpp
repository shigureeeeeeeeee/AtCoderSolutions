#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

long long solve(int N, vector<long long>& A) {
    vector<vector<long long>> dp(N, vector<long long>(2, 0));
    
    dp[0][0] = A[0];  // 最初のモンスターを倒す（奇数回目）
    dp[0][1] = 0;     // 最初のモンスターを逃がす
    
    for (int i = 1; i < N; i++) {
        dp[i][0] = max(dp[i-1][0], dp[i-1][1] + A[i]);
        dp[i][1] = max(dp[i-1][1], dp[i-1][0] + 2*A[i]);
    }
    
    return max(dp[N-1][0], dp[N-1][1]);
}

int main() {
    int N;
    cin >> N;
    
    vector<long long> A(N);
    for (int i = 0; i < N; i++) {
        cin >> A[i];
    }
    
    cout << solve(N, A) << endl;
    
    return 0;
}