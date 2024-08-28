#include <bits/stdc++.h>
using namespace std;

int main() {
    int n; cin >> n;
    vector<int> a(n);
    for(int i = 0; i < n; i++) cin >> a[i];

    vector<int> dp(n + 1);

    dp[0] = 0;
    for(int i = 0; i < n; i++) {
        dp[i + 1] = max(dp[i], dp[i] + a[i]);
    }
    cout << dp[n] << endl;
}