#include <bits/stdc++.h>
using namespace std;

int main() {
    int N;
    cin >> N;

    vector<string> S(N);
    int M = 0;
    for (int i = 0; i < N; i++) {
        cin >> S[i];
        M = max(M, (int)S[i].length());
    }

    vector<string> T(M, string(N, '*'));

    for (int i = 0; i < N; i++) {
        for (int j = 0; j < S[i].length(); j++) {
            T[j][N-1-i] = S[i][j];
        }
    }

    for (int i = 0; i < M; i++) {
        while (T[i].back() == '*') {
            T[i].pop_back();
        }
        if (T[i].empty()) {
            T[i] = "*";
        }
    }

    for (const string& t : T) {
        cout << t << endl;
    }

    return 0;
}
