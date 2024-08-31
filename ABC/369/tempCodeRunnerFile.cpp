#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int N;
    cin >> N;

    vector<long long> A(N + 1);
    for (int i = 1; i <= N; ++i) {
        cin >> A[i];
    }

    vector<long long> dp(2, 0);
    long long prev_dp0 = 0, prev_dp1 = 0;

    for (int i = 1; i <= N; ++i) {
        long long new_dp0 = max(prev_dp0, prev_dp1);
        long long new_dp1 = max(prev_dp0 + A[i], prev_dp1 + A[i]);

        if (i % 2 == 0) {
            new_dp1 = max(new_dp1, prev_dp1 + 2 * A[i]);
        }

        prev_dp0 = new_dp0;
        prev_dp1 = new_dp1;
    }

    cout << max(prev_dp0, prev_dp1) << endl;

    return 0;
}