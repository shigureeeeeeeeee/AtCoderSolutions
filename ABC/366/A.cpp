#include <bits/stdc++.h>
using namespace std;

int main() {
    int N, T, A;
    cin >> N >> T >> A;

    if (N < 1 || N > 99 || N % 2 == 0 || T < 0 || A < 0 || T >= N || A >= N || T + A > N) {
        cerr << "Invalid input" << endl;
        return 1;
    }

    if (T > N / 2 || A > N / 2) {
        cout << "Yes" << endl;
    } else {
        cout << "No" << endl;
    }

    return 0;
}
